/********************************************************************************
** Form generated from reading UI file 'summary.ui'
**
** Created: Mon Nov 2 16:30:10 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUMMARY_H
#define UI_SUMMARY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Summary
{
public:
    QWidget *centralWidget;
    QPushButton *pbLogin;
    QPushButton *pbAddData;
    QLineEdit *lePassword;
    QLabel *label_2;
    QPushButton *pbViewData;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Summary)
    {
        if (Summary->objectName().isEmpty())
            Summary->setObjectName(QString::fromUtf8("Summary"));
        Summary->resize(400, 300);
        centralWidget = new QWidget(Summary);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pbLogin = new QPushButton(centralWidget);
        pbLogin->setObjectName(QString::fromUtf8("pbLogin"));
        pbLogin->setGeometry(QRect(130, 100, 98, 27));
        pbAddData = new QPushButton(centralWidget);
        pbAddData->setObjectName(QString::fromUtf8("pbAddData"));
        pbAddData->setGeometry(QRect(90, 150, 98, 27));
        lePassword = new QLineEdit(centralWidget);
        lePassword->setObjectName(QString::fromUtf8("lePassword"));
        lePassword->setGeometry(QRect(190, 20, 113, 27));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 30, 91, 16));
        pbViewData = new QPushButton(centralWidget);
        pbViewData->setObjectName(QString::fromUtf8("pbViewData"));
        pbViewData->setGeometry(QRect(230, 150, 98, 27));
        Summary->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Summary);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        Summary->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Summary);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Summary->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Summary);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Summary->setStatusBar(statusBar);
        QWidget::setTabOrder(lePassword, pbLogin);
        QWidget::setTabOrder(pbLogin, pbAddData);
        QWidget::setTabOrder(pbAddData, pbViewData);

        retranslateUi(Summary);

        QMetaObject::connectSlotsByName(Summary);
    } // setupUi

    void retranslateUi(QMainWindow *Summary)
    {
        Summary->setWindowTitle(QApplication::translate("Summary", "Summary", 0, QApplication::UnicodeUTF8));
        pbLogin->setText(QApplication::translate("Summary", "Login", 0, QApplication::UnicodeUTF8));
        pbAddData->setText(QApplication::translate("Summary", "Add Data", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Summary", "Pass", 0, QApplication::UnicodeUTF8));
        pbViewData->setText(QApplication::translate("Summary", "View Data", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Summary: public Ui_Summary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUMMARY_H
