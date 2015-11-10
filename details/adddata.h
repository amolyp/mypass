#ifndef ADDDATA_H
#define ADDDATA_H

#include <QDialog>
#include <QDateTime>
#include "datamanager.h"

namespace Ui {
class AddData;
}

class AddData : public QDialog
{
    Q_OBJECT
    
public:
    explicit AddData(QWidget *parent = 0);
    ~AddData();
    
private slots:
    void on_tbAdd_clicked();

private:
    Ui::AddData *ui;
};

#endif // ADDDATA_H
