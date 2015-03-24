/********************************************************************************
** Form generated from reading UI file 'inventario.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVENTARIO_H
#define UI_INVENTARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Inventario
{
public:
    QComboBox *cb_inventario;

    void setupUi(QDialog *Inventario)
    {
        if (Inventario->objectName().isEmpty())
            Inventario->setObjectName(QStringLiteral("Inventario"));
        Inventario->resize(400, 300);
        cb_inventario = new QComboBox(Inventario);
        cb_inventario->setObjectName(QStringLiteral("cb_inventario"));
        cb_inventario->setGeometry(QRect(30, 30, 161, 27));

        retranslateUi(Inventario);

        QMetaObject::connectSlotsByName(Inventario);
    } // setupUi

    void retranslateUi(QDialog *Inventario)
    {
        Inventario->setWindowTitle(QApplication::translate("Inventario", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Inventario: public Ui_Inventario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTARIO_H
