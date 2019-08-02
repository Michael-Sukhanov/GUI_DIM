/********************************************************************************
** Form generated from reading UI file 'pm.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PM_H
#define UI_PM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_PM
{
public:

    void setupUi(QDialog *PM)
    {
        if (PM->objectName().isEmpty())
            PM->setObjectName(QString::fromUtf8("PM"));
        PM->resize(426, 338);

        retranslateUi(PM);

        QMetaObject::connectSlotsByName(PM);
    } // setupUi

    void retranslateUi(QDialog *PM)
    {
        PM->setWindowTitle(QCoreApplication::translate("PM", "PM confiruration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PM: public Ui_PM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PM_H
