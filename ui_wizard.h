/********************************************************************************
** Form generated from reading UI file 'wizard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZARD_H
#define UI_WIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWizard>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_Wizard
{
public:
    QWizardPage *wizardPage1;
    QPlainTextEdit *plainTextEdit;
    QWizardPage *wizardPage2;
    QPlainTextEdit *plainTextEdit_2;

    void setupUi(QWizard *Wizard)
    {
        if (Wizard->objectName().isEmpty())
            Wizard->setObjectName(QString::fromUtf8("Wizard"));
        Wizard->resize(320, 420);
        Wizard->setStyleSheet(QString::fromUtf8("QWizard {\n"
"background-color: black;\n"
"}"));
        Wizard->setWizardStyle(QWizard::ClassicStyle);
        wizardPage1 = new QWizardPage();
        wizardPage1->setObjectName(QString::fromUtf8("wizardPage1"));
        plainTextEdit = new QPlainTextEdit(wizardPage1);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(30, 110, 231, 101));
        plainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"background-color: black;\n"
"color: white;\n"
"}"));
        Wizard->addPage(wizardPage1);
        wizardPage2 = new QWizardPage();
        wizardPage2->setObjectName(QString::fromUtf8("wizardPage2"));
        plainTextEdit_2 = new QPlainTextEdit(wizardPage2);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(30, 120, 231, 101));
        plainTextEdit_2->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"background-color: black;\n"
"color: white;\n"
"}"));
        Wizard->addPage(wizardPage2);

        retranslateUi(Wizard);

        QMetaObject::connectSlotsByName(Wizard);
    } // setupUi

    void retranslateUi(QWizard *Wizard)
    {
        Wizard->setWindowTitle(QCoreApplication::translate("Wizard", "Wizard", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("Wizard", "Tutaj b\304\231dzie informacje o mo\305\274liwo\305\233ci\n"
"drukowania wynik\303\263w poprzez pod\305\202\304\205czon\304\205 drukark\304\231 USB :)", nullptr));
        plainTextEdit_2->setPlainText(QCoreApplication::translate("Wizard", "Nast\304\231pnie wyszukaj swoj\304\205 drukark\304\231 USB,\n"
"kliknij \"Print\" i gotowe ! :)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Wizard: public Ui_Wizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZARD_H
