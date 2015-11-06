#include <QtGui/QApplication>
#include "summary.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Summary w;
    w.show();
    
    return a.exec();
}
