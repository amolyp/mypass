#include <errno.h>
#include <unistd.h>

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QDateTime>
#include <QDebug>

#include "datamanager.h"

/** @file datamanager.cpp
    @brief Implements the DataManager class

    @class DataManager
    @brief Application specific wrapper for QSqlDatabase class for storing & retrieving data from the sqlite3 application database.
*/

/// Singleton instance of the DataManager Class.
DataManager * DataManager::singleton = NULL;

/**	@brief Constructor for DataManager.
    \n This is the only constructor and is private. A pointer to the singleton of this class can be acquired through DataManager::createInstance for the first time and through DataManager::getInstance consequently.
    \n Opens a QSqlDatabase connection to the sqlite3 database located at the path provided.

    @param *parent The parent object of the instance. In our case NULL.
    @param path Path to sqlite3 database.
*/
DataManager::DataManager(QObject *parent, const QString& path) : QObject(parent){

    this->db = QSqlDatabase::addDatabase("QSQLITE");
    this->db.setDatabaseName(path);
//    this->db.setPassword("agdcoup");
    this->db.open();
    this->execute("PRAGMA foreign_keys=ON;");
}

/**	@brief Returns a pointer to the singleton instance or throws an DataException if the singleton has not been instantiated
    \n See DataManager::createInstance for more information.

    @return DataManager * Pointer to the singleton instance.
    @throws DataException If the singleton instance has not been instantiated.
*/
DataManager * DataManager::getInstance() {//throw(DataException)

    if(DataManager::DataManager::singleton == NULL)qDebug() << "Uninitialized"; //THROWDATA("Uninitialized", ENXIO);
    return DataManager::singleton;
}

/**	@brief Initializes the singleton instance of this class.
    \n This method must be invoked
    - To intialize the singleton instance of this class
    - Only once untill the singleton instance is destroyed by invoking DataManager::destroyInstance

    The rationale between splitting the functionality of retrieving a handle to the singleton instance over 2 methods namely DataManager::createInstance and DataManager::destroyInstance is to
    - Ensure that seperate invocations do not attempt to set different driver paths
    - Eliminate the overhead of testing if the instance needs to be instantiated or not before every call to acquire a pointer to the instance

    @param path Path to sqlite3 database
    @return DataManager * Pointer to the singleton instance of this class
    @throws DataException If the singleton instance has already been instantiated or could not be instantiated
*/
DataManager * DataManager::createInstance(const QString &path) {//throw(DataException)

    if(DataManager::singleton != NULL) qDebug() << "Already Initialized";
    DataManager::singleton = new DataManager(NULL, path);
    if(DataManager::singleton->db.lastError().isValid()){

        QString s = "Could not initialize("+DataManager::singleton->db.lastError().text()+")";
        int code = DataManager::singleton->db.lastError().number();

        delete DataManager::singleton;
        DataManager::singleton = NULL;
        qDebug() << "Code:" << code;
//        THROWDATA(s, code);
    }

    return DataManager::singleton;
}

/**	@brief Destructor for DataManager
    \n Performs the following clean up operations: -
    - Releases the sqlite3 database
*/
void DataManager::destroyInstance() throw(){

    delete DataManager::singleton;
    DataManager::singleton = NULL;
}

/** @brief Executes the sql statement passed.
    @param sql  The sql statement to be executed.
    @throws DataException if the statement could not be executed.

*/
void DataManager::execute(const QString& sql) {//throw(DataException)

    QSqlQuery query;

    if(!query.exec(sql)) qDebug() << "Could not execute " << "Could not execute \"" + sql + "\"(" + query.lastError().text()+")", query.lastError().number();

//        THROWDATA("Could not execute \"" + sql + "\"(" + query.lastError().text()+")", query.lastError().number());

}

/** @brief Executes an sql query and stores the resultset in the QSqlQueryModel provided.
    @param sql The sql query
    @param *resultSet Pointer to the QSqlQueryModel object where the results should be stored.
    @throws DataException if the results could not be retrieved.
*/
int DataManager::getData(const QString &sql, QSqlQueryModel *resultSet) {

    resultSet->setQuery(sql);

    if(resultSet->lastError().isValid())qDebug() << "Could not execute" << sql;

    return resultSet->rowCount();
}

/** @brief Saves an ARN::Exception or any of its subclasses to the sqlite3 database.
    @param e ARN::Exception instance to be logged.
    @throws DataException if the instance could not be saved.
*/
/*
void DataManager::log(ARN::Exception& e) {//throw(DataException)


    QString s = QString(

                "INSERT INTO LogEvents("
                "logTime, "
                "type, "
                "description, "
                "ExceptionName, "
                "ExceptionDescription, "
                "errCode, "
                "lineNo, "
                "functionName, "
                "fileName"
                ") VALUES("
                "strftime('%s', 'now'), "
                "'ERROR', "
                "'EXCEPTION', "
                "%1"
                ")"
                ).arg(e.toCSV().c_str());

    this->execute(s);
    qDebug() << s;

}
*/
/** @brief Inserts a new log entry in the sqlite3 database.
    @param msgType  The type of log entry namely: -
    - INFO
    - ALERT
    - ERROR
    @param msg A String describing the entry.
    @param errCode Error number.
    @throws DataException if the log entry could not be saved.
*/
void DataManager::log(int msgType, QString msg, int errCode) {//throw (DataException)

    QString m[3] = {"INFO", "ALERT", "ERROR"};

    QString s = QString(

                "INSERT INTO LogEvents("
                "logTime, "
                "type, "
                "description, "
                "errCode"
                ") VALUES("
                "strftime('%s', 'now'), "
                "'%1', "
                "'%2', "
                "'%3'"
                ")"
                )
            .arg(m[msgType])
            .arg(msg)
            .arg(errCode);

    this->execute(s);
}


