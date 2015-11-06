#ifndef VIEWDATA_H
#define VIEWDATA_H

#include <QDialog>

namespace Ui {
class ViewData;
}

class ViewData : public QDialog
{
    Q_OBJECT
    
public:
    explicit ViewData(QWidget *parent = 0);
    ~ViewData();
    
private:
    Ui::ViewData *ui;
};

#endif // VIEWDATA_H
