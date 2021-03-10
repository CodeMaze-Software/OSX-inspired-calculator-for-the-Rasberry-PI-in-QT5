/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_PlusMinus;
    QPushButton *pushButton_Percent;
    QPushButton *pushButton_Divide;
    QPushButton *pushButton_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_Star;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_Minus;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_Plus;
    QPushButton *pushButton_0;
    QPushButton *pushButton_Dot;
    QPushButton *pushButton_Equals;
    QPushButton *pushButton_Equals_2;
    QPushButton *pushButton_Dot_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(320, 421);
        QFont font;
        font.setFamily(QString::fromUtf8(".AppleSystemUIFont"));
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 321, 61));
        QFont font1;
        font1.setPointSize(24);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"border: 1px solid gray;\n"
"color: white;\n"
"background-color : black;\n"
"\n"
"}\n"
"\n"
""));
        pushButton_Clear = new QPushButton(centralwidget);
        pushButton_Clear->setObjectName(QString::fromUtf8("pushButton_Clear"));
        pushButton_Clear->setGeometry(QRect(0, 60, 61, 61));
        pushButton_Clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(210,210,210);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_PlusMinus = new QPushButton(centralwidget);
        pushButton_PlusMinus->setObjectName(QString::fromUtf8("pushButton_PlusMinus"));
        pushButton_PlusMinus->setGeometry(QRect(60, 60, 61, 61));
        pushButton_PlusMinus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(210,210,210);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_Percent = new QPushButton(centralwidget);
        pushButton_Percent->setObjectName(QString::fromUtf8("pushButton_Percent"));
        pushButton_Percent->setEnabled(true);
        pushButton_Percent->setGeometry(QRect(120, 60, 61, 61));
        pushButton_Percent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(210,210,210);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_Divide = new QPushButton(centralwidget);
        pushButton_Divide->setObjectName(QString::fromUtf8("pushButton_Divide"));
        pushButton_Divide->setGeometry(QRect(180, 60, 141, 61));
        pushButton_Divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(255,145,0);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ff7832, stop: 1 #ff9739);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 240, 61, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(232, 232, 232);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 240, 61, 61));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(232, 232, 232);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_Star = new QPushButton(centralwidget);
        pushButton_Star->setObjectName(QString::fromUtf8("pushButton_Star"));
        pushButton_Star->setGeometry(QRect(180, 120, 141, 61));
        pushButton_Star->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(255,145,0);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ff7832, stop: 1 #ff9739);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 240, 61, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(232, 232, 232);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 180, 61, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(232, 232, 232);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(120, 180, 61, 61));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(232, 232, 232);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(60, 180, 61, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(232, 232, 232);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_Minus = new QPushButton(centralwidget);
        pushButton_Minus->setObjectName(QString::fromUtf8("pushButton_Minus"));
        pushButton_Minus->setGeometry(QRect(180, 180, 141, 61));
        pushButton_Minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(255,145,0);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ff7832, stop: 1 #ff9739);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 120, 61, 61));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(232, 232, 232);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(60, 120, 61, 61));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(232, 232, 232);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(120, 120, 61, 61));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(232, 232, 232);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_Plus = new QPushButton(centralwidget);
        pushButton_Plus->setObjectName(QString::fromUtf8("pushButton_Plus"));
        pushButton_Plus->setGeometry(QRect(180, 240, 141, 61));
        pushButton_Plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(255,145,0);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ff7832, stop: 1 #ff9739);\n"
"}"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(0, 300, 121, 61));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(232, 232, 232);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_Dot = new QPushButton(centralwidget);
        pushButton_Dot->setObjectName(QString::fromUtf8("pushButton_Dot"));
        pushButton_Dot->setGeometry(QRect(120, 300, 61, 61));
        pushButton_Dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(210,210,210);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_Equals = new QPushButton(centralwidget);
        pushButton_Equals->setObjectName(QString::fromUtf8("pushButton_Equals"));
        pushButton_Equals->setGeometry(QRect(180, 300, 141, 61));
        pushButton_Equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(255,145,0);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ff7832, stop: 1 #ff9739);\n"
"}"));
        pushButton_Equals_2 = new QPushButton(centralwidget);
        pushButton_Equals_2->setObjectName(QString::fromUtf8("pushButton_Equals_2"));
        pushButton_Equals_2->setGeometry(QRect(180, 360, 141, 61));
        pushButton_Equals_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(255,145,0);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ff7832, stop: 1 #ff9739);\n"
"}"));
        pushButton_Dot_2 = new QPushButton(centralwidget);
        pushButton_Dot_2->setObjectName(QString::fromUtf8("pushButton_Dot_2"));
        pushButton_Dot_2->setGeometry(QRect(0, 360, 181, 61));
        pushButton_Dot_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: rgb(210,210,210);\n"
"	color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CodeMaze Calc", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_Clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_PlusMinus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_Percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_Divide->setText(QCoreApplication::translate("MainWindow", "\\", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_Star->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_Minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_Plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_Dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_Equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_Equals_2->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        pushButton_Dot_2->setText(QCoreApplication::translate("MainWindow", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
