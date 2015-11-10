#ifndef VIEWDATA_H
#define VIEWDATA_H

#include <QDialog>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QDateTime>
#include <QDebug>
#include <QApplication>
#include "datamanager.h"

namespace Ui {
class ViewData;
}

class ViewData : public QDialog
{
    Q_OBJECT
    
public:
    explicit ViewData(QWidget *parent = 0);
    ~ViewData();

private slots:
    void on_tbViewData_clicked();
    void on_tbSearch_clicked();
    void cellSelect(int row, int col);

    void on_tbUpdateIssue_clicked();
    void refresh();

    void on_tbClear_clicked();

private:
    Ui::ViewData *ui;
    int currRow,currCol;
    QList<long> idList;
//    QString efile;

};

#endif // VIEWDATA_H
