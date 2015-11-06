#include "adddata.h"
#include "ui_adddata.h"

AddData::AddData(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddData)
{
    ui->setupUi(this);
    setWindowState(Qt::WindowMaximized);
    ui->lePass->setEchoMode(QLineEdit::Password);
    ui->lePass->setInputMethodHints(Qt::ImhHiddenText| Qt::ImhNoPredictiveText|Qt::ImhNoAutoUppercase);

}

AddData::~AddData()
{
    delete ui;
}

void AddData::on_tbAdd_clicked()
{
    long now = QDateTime::currentDateTime().toTime_t();
    QString sql = QString("insert into details values('%1','%2','%3','%4','%5','%6','%7','%8') ;")
            .arg(now)
            .arg(ui->leName->text())
            .arg(ui->leUname->text())
            .arg(ui->lePass->text())
            .arg(ui->leEmail->text())
            .arg(ui->leLink->text())
            .arg(ui->leDetails->text())
            .arg(ui->leContact->text());

    DataManager::getInstance()->execute(sql);
}
