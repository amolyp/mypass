/********************************************************************************
** Form generated from reading UI file 'viewdata.ui'
**
** Created: Mon Nov 9 15:55:27 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWDATA_H
#define UI_VIEWDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ViewData
{
public:
    QTableWidget *twView;
    QPushButton *tbViewData;
    QLabel *label_5;
    QPushButton *tbUpdateIssue;
    QGroupBox *gbSearch;
    QRadioButton *rbCust;
    QRadioButton *rbCoupon;
    QRadioButton *rbDist;
    QLabel *lblStatus;
    QTextEdit *txtSearch;
    QPushButton *tbSearch;
    QPushButton *tbClear;

    void setupUi(QDialog *ViewData)
    {
        if (ViewData->objectName().isEmpty())
            ViewData->setObjectName(QString::fromUtf8("ViewData"));
        ViewData->resize(900, 617);
        twView = new QTableWidget(ViewData);
        twView->setObjectName(QString::fromUtf8("twView"));
        twView->setEnabled(true);
        twView->setGeometry(QRect(30, 102, 891, 501));
        tbViewData = new QPushButton(ViewData);
        tbViewData->setObjectName(QString::fromUtf8("tbViewData"));
        tbViewData->setGeometry(QRect(420, 64, 98, 27));
        label_5 = new QLabel(ViewData);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 28, 91, 17));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tbUpdateIssue = new QPushButton(ViewData);
        tbUpdateIssue->setObjectName(QString::fromUtf8("tbUpdateIssue"));
        tbUpdateIssue->setGeometry(QRect(648, 62, 98, 27));
        gbSearch = new QGroupBox(ViewData);
        gbSearch->setObjectName(QString::fromUtf8("gbSearch"));
        gbSearch->setGeometry(QRect(350, 22, 301, 31));
        rbCust = new QRadioButton(gbSearch);
        rbCust->setObjectName(QString::fromUtf8("rbCust"));
        rbCust->setGeometry(QRect(14, 6, 91, 17));
        rbCust->setChecked(true);
        rbCoupon = new QRadioButton(gbSearch);
        rbCoupon->setObjectName(QString::fromUtf8("rbCoupon"));
        rbCoupon->setGeometry(QRect(110, 8, 82, 17));
        rbDist = new QRadioButton(gbSearch);
        rbDist->setObjectName(QString::fromUtf8("rbDist"));
        rbDist->setGeometry(QRect(204, 7, 82, 17));
        lblStatus = new QLabel(ViewData);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        lblStatus->setGeometry(QRect(131, 61, 271, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        lblStatus->setFont(font);
        lblStatus->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));
        lblStatus->setAlignment(Qt::AlignCenter);
        txtSearch = new QTextEdit(ViewData);
        txtSearch->setObjectName(QString::fromUtf8("txtSearch"));
        txtSearch->setGeometry(QRect(128, 20, 211, 31));
        tbSearch = new QPushButton(ViewData);
        tbSearch->setObjectName(QString::fromUtf8("tbSearch"));
        tbSearch->setGeometry(QRect(40, 64, 75, 23));
        tbClear = new QPushButton(ViewData);
        tbClear->setObjectName(QString::fromUtf8("tbClear"));
        tbClear->setGeometry(QRect(535, 63, 98, 27));

        retranslateUi(ViewData);

        QMetaObject::connectSlotsByName(ViewData);
    } // setupUi

    void retranslateUi(QDialog *ViewData)
    {
        ViewData->setWindowTitle(QApplication::translate("ViewData", "Dialog", 0, QApplication::UnicodeUTF8));
        tbViewData->setText(QApplication::translate("ViewData", "View All Data", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ViewData", "Search Data", 0, QApplication::UnicodeUTF8));
        tbUpdateIssue->setText(QApplication::translate("ViewData", "Update Data", 0, QApplication::UnicodeUTF8));
        gbSearch->setTitle(QString());
        rbCust->setText(QApplication::translate("ViewData", "Name", 0, QApplication::UnicodeUTF8));
        rbCoupon->setText(QApplication::translate("ViewData", "Coupon No", 0, QApplication::UnicodeUTF8));
        rbDist->setText(QApplication::translate("ViewData", "Dist. Name", 0, QApplication::UnicodeUTF8));
        lblStatus->setText(QString());
        tbSearch->setText(QApplication::translate("ViewData", "Search", 0, QApplication::UnicodeUTF8));
        tbClear->setText(QApplication::translate("ViewData", "Clear Data", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ViewData: public Ui_ViewData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWDATA_H
