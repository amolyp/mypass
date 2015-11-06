/********************************************************************************
** Form generated from reading UI file 'adddata.ui'
**
** Created: Wed Nov 4 11:05:21 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDATA_H
#define UI_ADDDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddData
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *leName;
    QLabel *label_2;
    QLineEdit *leUname;
    QLabel *label_3;
    QLineEdit *lePass;
    QLabel *label_4;
    QLineEdit *leEmail;
    QLabel *label_5;
    QLineEdit *leLink;
    QLabel *label_6;
    QLineEdit *leDetails;
    QLabel *label_7;
    QLineEdit *leContact;
    QPushButton *tbAdd;

    void setupUi(QDialog *AddData)
    {
        if (AddData->objectName().isEmpty())
            AddData->setObjectName(QString::fromUtf8("AddData"));
        AddData->resize(699, 501);
        layoutWidget = new QWidget(AddData);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 60, 621, 371));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leName = new QLineEdit(layoutWidget);
        leName->setObjectName(QString::fromUtf8("leName"));

        gridLayout->addWidget(leName, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        leUname = new QLineEdit(layoutWidget);
        leUname->setObjectName(QString::fromUtf8("leUname"));

        gridLayout->addWidget(leUname, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lePass = new QLineEdit(layoutWidget);
        lePass->setObjectName(QString::fromUtf8("lePass"));

        gridLayout->addWidget(lePass, 2, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        leEmail = new QLineEdit(layoutWidget);
        leEmail->setObjectName(QString::fromUtf8("leEmail"));

        gridLayout->addWidget(leEmail, 3, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        leLink = new QLineEdit(layoutWidget);
        leLink->setObjectName(QString::fromUtf8("leLink"));

        gridLayout->addWidget(leLink, 4, 1, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        leDetails = new QLineEdit(layoutWidget);
        leDetails->setObjectName(QString::fromUtf8("leDetails"));

        gridLayout->addWidget(leDetails, 5, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        leContact = new QLineEdit(layoutWidget);
        leContact->setObjectName(QString::fromUtf8("leContact"));

        gridLayout->addWidget(leContact, 6, 1, 1, 1);

        tbAdd = new QPushButton(AddData);
        tbAdd->setObjectName(QString::fromUtf8("tbAdd"));
        tbAdd->setGeometry(QRect(120, 450, 98, 27));

        retranslateUi(AddData);

        QMetaObject::connectSlotsByName(AddData);
    } // setupUi

    void retranslateUi(QDialog *AddData)
    {
        AddData->setWindowTitle(QApplication::translate("AddData", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddData", "Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddData", "User Name", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddData", "Password", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AddData", "Email", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AddData", "Link", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("AddData", "Details", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("AddData", "Contact", 0, QApplication::UnicodeUTF8));
        tbAdd->setText(QApplication::translate("AddData", "Add Record", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddData: public Ui_AddData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDATA_H
