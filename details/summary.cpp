#include "summary.h"
#include "ui_summary.h"
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
}

Summary::~Summary()
{
    delete ui;
}

void Summary::on_pbLogin_clicked()
{
    if (DataManager::getInstance()->showStr(ui->lePassword->text())=="k&.)["){
        ui->pbAddData->show();
        ui->pbViewData->show();
    }
    else{
        ui->pbAddData->hide();
        ui->pbViewData->hide();
    }
    ui->lePassword->clear();
}


void Summary::on_pbAddData_clicked()
{
    (new AddData(this))->show();
}

void Summary::on_pbViewData_clicked()
{
    (new ViewData(this))->show();
}
