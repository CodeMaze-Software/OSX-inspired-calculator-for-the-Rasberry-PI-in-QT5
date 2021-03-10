/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton_Back;
    QPushButton *pushButton_Scan;
    QPushButton *pushButton_Connect;
    QPlainTextEdit *plainTextEdit;
    QProgressBar *progressBar;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(320, 420);
        Dialog->setStyleSheet(QString::fromUtf8("QDialog {\n"
"Background-color: black;\n"
"\n"
"}"));
        pushButton_Back = new QPushButton(Dialog);
        pushButton_Back->setObjectName(QString::fromUtf8("pushButton_Back"));
        pushButton_Back->setGeometry(QRect(0, 360, 161, 61));
        pushButton_Back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(210,210,210);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_Scan = new QPushButton(Dialog);
        pushButton_Scan->setObjectName(QString::fromUtf8("pushButton_Scan"));
        pushButton_Scan->setEnabled(true);
        pushButton_Scan->setGeometry(QRect(0, 310, 321, 51));
        pushButton_Scan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(210,210,210);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_Connect = new QPushButton(Dialog);
        pushButton_Connect->setObjectName(QString::fromUtf8("pushButton_Connect"));
        pushButton_Connect->setGeometry(QRect(160, 360, 161, 61));
        pushButton_Connect->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(255,145,0);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ff7832, stop: 1 #ff9739);\n"
"}"));
        plainTextEdit = new QPlainTextEdit(Dialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(60, 10, 211, 51));
        plainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"Background-color: black;\n"
"color: white;\n"
"}"));
        progressBar = new QProgressBar(Dialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(100, 270, 118, 23));
        progressBar->setValue(24);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        pushButton_Back->setText(QCoreApplication::translate("Dialog", "Back", nullptr));
        pushButton_Scan->setText(QCoreApplication::translate("Dialog", "Scan", nullptr));
        pushButton_Connect->setText(QCoreApplication::translate("Dialog", "Connect", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("Dialog", "CodeMaze PrintCalcMini 1.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
