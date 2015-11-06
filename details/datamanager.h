#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <QObject>
#include <QString>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlError>

//#include "lib/ARNException.h"
//#include "dataexception.h"
//#include "ea503config.h"

class DataManager : public QObject{

    Q_OBJECT

private:

    explicit DataManager(QObject *parent = 0, const QString& path="");
    static DataManager *singleton;
    QSqlDatabase db;

public:

    static DataManager * createInstance(const QString& path) ;//throw(DataException)
    static DataManager * getInstance() ;//throw(DataException)
    static void destroyInstance() throw();

    void execute(const QString& sql) ;//throw(DataException)
    int getData(const QString& sql, QSqlQueryModel *resultSet) ;//throw(DataException)
//    void log(ARN::Exception& e) ;//throw(DataException)
    void log(int msgType, QString msg, int errCode=0);// throw (DataException)

signals:

public slots:

};

#endif // DATAMANAGER_H
