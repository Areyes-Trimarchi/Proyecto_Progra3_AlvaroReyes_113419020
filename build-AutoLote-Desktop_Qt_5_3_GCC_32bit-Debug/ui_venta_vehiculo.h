/********************************************************************************
** Form generated from reading UI file 'venta_vehiculo.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTA_VEHICULO_H
#define UI_VENTA_VEHICULO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Venta_vehiculo
{
public:
    QLabel *label;
    QLabel *label_2;
    QComboBox *cb_venta_vehiculo;
    QPushButton *pb_venta_vehiculo_cancelar;
    QPushButton *pb_venta_vehiculo_aceptar;

    void setupUi(QDialog *Venta_vehiculo)
    {
        if (Venta_vehiculo->objectName().isEmpty())
            Venta_vehiculo->setObjectName(QStringLiteral("Venta_vehiculo"));
        Venta_vehiculo->resize(253, 178);
        label = new QLabel(Venta_vehiculo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 10, 131, 17));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(Venta_vehiculo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 40, 111, 17));
        cb_venta_vehiculo = new QComboBox(Venta_vehiculo);
        cb_venta_vehiculo->setObjectName(QStringLiteral("cb_venta_vehiculo"));
        cb_venta_vehiculo->setGeometry(QRect(60, 70, 131, 27));
        pb_venta_vehiculo_cancelar = new QPushButton(Venta_vehiculo);
        pb_venta_vehiculo_cancelar->setObjectName(QStringLiteral("pb_venta_vehiculo_cancelar"));
        pb_venta_vehiculo_cancelar->setGeometry(QRect(10, 120, 99, 27));
        pb_venta_vehiculo_aceptar = new QPushButton(Venta_vehiculo);
        pb_venta_vehiculo_aceptar->setObjectName(QStringLiteral("pb_venta_vehiculo_aceptar"));
        pb_venta_vehiculo_aceptar->setGeometry(QRect(140, 120, 99, 27));

        retranslateUi(Venta_vehiculo);
        QObject::connect(pb_venta_vehiculo_cancelar, SIGNAL(clicked()), Venta_vehiculo, SLOT(close()));

        QMetaObject::connectSlotsByName(Venta_vehiculo);
    } // setupUi

    void retranslateUi(QDialog *Venta_vehiculo)
    {
        Venta_vehiculo->setWindowTitle(QString());
        label->setText(QApplication::translate("Venta_vehiculo", "Venta Vehiculo", 0));
        label_2->setText(QApplication::translate("Venta_vehiculo", "Elija un Vehiculo", 0));
        pb_venta_vehiculo_cancelar->setText(QApplication::translate("Venta_vehiculo", "Cancelar", 0));
        pb_venta_vehiculo_aceptar->setText(QApplication::translate("Venta_vehiculo", "Aceptar", 0));
    } // retranslateUi

};

namespace Ui {
    class Venta_vehiculo: public Ui_Venta_vehiculo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTA_VEHICULO_H
