#include "summary.h"
#include "ui_summary.h"
SimpleCrypt crypto(Q_UINT64_C(0)); //some random number
Summary::Summary(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Summary)
{
    ui->setupUi(this);

    ui->lePassword->setEchoMode(QLineEdit::Password);
    ui->lePassword->setInputMethodHints(Qt::ImhHiddenText| Qt::ImhNoPredictiveText|Qt::ImhNoAutoUppercase);

    DataManager::createInstance("myp.db");
    ui->pbAddData->hide();
    ui->pbViewData->hide();
    qDebug() << encryptStr("anushwa1");
    qDebug() << decryptStr(encryptStr("anushwa1"));



}

Summary::~Summary()
{
    delete ui;
}

void Summary::on_pbLogin_clicked()
{
    if (encryptStr(ui->lePassword->text())=="AwJzhYpHjSx1EUXUXA=="){
        ui->pbAddData->show();
        ui->pbViewData->show();
    }
    else{
        ui->pbAddData->hide();
        ui->pbViewData->hide();
    }
    ui->lePassword->clear();
}

QString Summary::encryptStr(QString myStr){
    //Encryption
    QString result = crypto.encryptToString(myStr);

    return result;
}

QString Summary::decryptStr(QString myStr){
//    SimpleCrypt crypto(Q_UINT64_C(0x0c2ad4a4acb9f023)); //some random number
    //Decryption
    QString decrypted = crypto.decryptToString(myStr);

    return decrypted;
}

void Summary::on_pbAddData_clicked()
{
    (new AddData(this))->show();
}

void Summary::on_pbViewData_clicked()
{
    (new ViewData(this))->show();
}
