#include "viewdata.h"
#include "ui_viewdata.h"

ViewData::ViewData(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewData)
{
    ui->setupUi(this);
    setWindowState(Qt::WindowMaximized);
}

ViewData::~ViewData()
{
    delete ui;
}
