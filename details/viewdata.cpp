#include "viewdata.h"
#include "ui_viewdata.h"

ViewData::ViewData(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewData)
{
    ui->setupUi(this);
    setWindowState(Qt::WindowMaximized);

    ui->rbCoupon->hide();
    ui->rbDist->hide();
    connect(ui->twView,SIGNAL(cellClicked(int,int)),this,SLOT(cellSelect(int,int)));
}

ViewData::~ViewData()
{
    delete ui;
}


void ViewData::on_tbViewData_clicked(){
    QString sql;
    QSqlQueryModel qs;
    QSqlRecord r;
    QStringList str;
    time_t dt;
    QDateTime res;

    //    efile = "";
    ui->txtSearch->clear();

    sql = QString("select * from details order by id desc;");
    str <<"Name" << "Username" << "Pass" << "Email" << "Link" << "Details" << "Contact";
    ui->twView->setColumnCount(7);
    ui->twView->setHorizontalHeaderLabels(str);
    ui->lblStatus->clear();
    int count = DataManager::getInstance()->getData(sql,&qs);
    ui->twView->setRowCount(count);
    ui->twView->resizeColumnsToContents();
    if (count > 0){
        //        efile.append("Customer_Name,Place,Dist_Name,CouponNo,PDC_Date,Issue_Date,Expiry_Date,Verified,Recv_From_Dist,Recv_From_Stockist\n");
        idList.clear();
        for (int i=0;i<count;i++){
            r = qs.record(i);
            idList.append(r.value("id").toLongLong());
            QString str;
            str = r.value("name").toString();
            //                efile.append(str).append(",");
            ui->twView->setItem(i,0,new QTableWidgetItem(str));
            str = r.value("uname").toString();
            //                efile.append(str).append(",");
            ui->twView->setItem(i,1,new QTableWidgetItem(str));
            str = DataManager::getInstance()->myString(r.value("upass").toString());
            //                efile.append(str).append(",");
            ui->twView->setItem(i,2,new QTableWidgetItem(str));
            str = r.value("email").toString();
            //                efile.append(str).append(",");
            ui->twView->setItem(i,3,new QTableWidgetItem(str));

            str = r.value("link").toString();
            //                efile.append(str).append(",");
            ui->twView->setItem(i,4,new QTableWidgetItem(str));
            str = r.value("details").toString();
            //                efile.append(str).append(",");
            ui->twView->setItem(i,5,new QTableWidgetItem(str));
            str = r.value("contact").toString();
            //                efile.append(str).append(",");
            ui->twView->setItem(i,6,new QTableWidgetItem(str));

            //            efile.append("\n");
        }
        ui->twView->verticalHeader()->resizeSections(QHeaderView::ResizeToContents);
    }
    else{
        ui->twView->clearContents();
        ui->lblStatus->setText("No records present.");
    }
}


void ViewData::on_tbSearch_clicked(){
    QString sql;
    QSqlQueryModel qs;
    QSqlRecord r;
    QStringList strList;
    QString ss;

    ss.append("%").append(ui->txtSearch->toPlainText()).append("%");
    if (ui->rbCust->isChecked()){
        sql = QString("select * from details where name like '%1' order by id desc;").arg(ss);
    }
    //    else if (ui->rbCoupon->isChecked()){
    //        sql = QString("select * from coupondetails where coupon like '%1' order by id desc;").arg(ss);
    //    }
    //    else if (ui->rbDist->isChecked()){
    //        sql = QString("select * from coupondetails where distname like '%1' order by id desc;").arg(ss);
    //    }
    //    else if (userName=="auth"){
    strList <<"Name" << "Username" << "Pass" << "Email" << "Link" << "Details" << "Contact";
    ui->twView->setColumnCount(7);
    ui->twView->setHorizontalHeaderLabels(strList);
    //    }
    //    efile = "";
    int count = DataManager::getInstance()->getData(sql,&qs);
    ui->twView->setRowCount(count);
    ui->twView->resizeColumnsToContents();
    if (count > 0){
        //        efile.append("Customer_Name,Place,Dist_Name,CouponNo,PDC_Date,Issue_Date,Expiry_Date,Verified,Recv_From_Dist,Recv_From_Stockist\n");
        idList.clear();
        for (int i=0;i<count;i++){
            r = qs.record(i);
            idList.append(r.value("id").toLongLong());
            QString str;
            str = r.value("name").toString();
            //                efile.append(str).append(",");
            ui->twView->setItem(i,0,new QTableWidgetItem(str));
            str = r.value("uname").toString();
            //                efile.append(str).append(",");
            ui->twView->setItem(i,1,new QTableWidgetItem(str));
            str = DataManager::getInstance()->myString(r.value("upass").toString());
            //                efile.append(str).append(",");
            ui->twView->setItem(i,2,new QTableWidgetItem(str));
            str = r.value("email").toString();
            //                efile.append(str).append(",");
            ui->twView->setItem(i,3,new QTableWidgetItem(str));

            str = r.value("link").toString();
            //                efile.append(str).append(",");
            ui->twView->setItem(i,4,new QTableWidgetItem(str));
            str = r.value("details").toString();
            //                efile.append(str).append(",");
            ui->twView->setItem(i,5,new QTableWidgetItem(str));
            str = r.value("contact").toString();
            //                efile.append(str).append(",");
            ui->twView->setItem(i,6,new QTableWidgetItem(str));

            ui->twView->verticalHeader()->resizeSections(QHeaderView::ResizeToContents);

            //            efile.append("\n");
        }
    }
    else{
        ui->twView->clearContents();
        ui->lblStatus->setText("No records present.");
    }

}

void ViewData::cellSelect(int row, int col){
    currRow = row;
    currCol = col;

//    QTextEdit *edit = new QTextEdit();
//    edit->setText(ui->twView->item(currRow, currCol)->text());
//    ui->twView->setCellWidget(currRow, currCol, edit);
//    ui->twView->item(currRow,currCol)->setText(edit->toPlainText());
//    qDebug() << edit->toPlainText();
//    connect(edit,SIGNAL(textChanged()))
    //    qDebug() << "list" <<row << col;
}


void ViewData::on_tbUpdateIssue_clicked(){
    QString sql;

    if (ui->twView->rowCount()>0){
        sql = QString("update details set name='%1', uname='%2', upass='%3', email='%4', link='%5', details='%6', contact='%7' where id='%8'; ")
                .arg(ui->twView->item(currRow,0)->text())
                .arg(ui->twView->item(currRow,1)->text())
                .arg(DataManager::getInstance()->showStr(ui->twView->item(currRow,2)->text()))
                .arg(ui->twView->item(currRow,3)->text())
                .arg(ui->twView->item(currRow,4)->text())
                .arg(ui->twView->item(currRow,5)->text())
                .arg(ui->twView->item(currRow,6)->text())
                .arg(idList.at(currRow));

        DataManager::getInstance()->execute(sql);
    }
}


void ViewData::refresh(){
    qDebug() << "Refreshed.";
    on_tbViewData_clicked();
}

void ViewData::on_tbClear_clicked()
{
    ui->twView->clear();
    QStringList str;
    str << "Name" << "Username" << "Pass" << "Email" << "Link" << "Details" << "Contact";
    ui->twView->setColumnCount(7);
    ui->twView->setHorizontalHeaderLabels(str);
    ui->lblStatus->clear();
    ui->twView->setRowCount(0);
    ui->twView->resizeColumnsToContents();
    ui->txtSearch->clear();
}
