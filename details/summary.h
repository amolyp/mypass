#ifndef SUMMARY_H
#define SUMMARY_H

#include <QMainWindow>
#include <QDebug>
#include <QCryptographicHash>
#include "datamanager.h"
#include "adddata.h"
#include "viewdata.h"
#include "simplecrypt.h"

namespace Ui {
class Summary;
}

class Summary : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Summary(QWidget *parent = 0);
    ~Summary();
    
private slots:
    void on_pbLogin_clicked();

    void on_pbAddData_clicked();

    void on_pbViewData_clicked();

private:
    Ui::Summary *ui;
    QString encryptStr(QString myStr);
    QString decryptStr(QString myStr);

};

#endif // SUMMARY_H
