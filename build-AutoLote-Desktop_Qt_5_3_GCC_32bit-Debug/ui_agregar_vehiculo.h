/********************************************************************************
** Form generated from reading UI file 'agregar_vehiculo.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGAR_VEHICULO_H
#define UI_AGREGAR_VEHICULO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Agregar_vehiculo
{
public:
    QLabel *label;
    QPushButton *pb_agregar_carro;
    QPushButton *pb_agregar_moto;
    QPushButton *pb_cancelar;

    void setupUi(QDialog *Agregar_vehiculo)
    {
        if (Agregar_vehiculo->objectName().isEmpty())
            Agregar_vehiculo->setObjectName(QStringLiteral("Agregar_vehiculo"));
        Agregar_vehiculo->resize(271, 142);
        label = new QLabel(Agregar_vehiculo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 10, 151, 21));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        pb_agregar_carro = new QPushButton(Agregar_vehiculo);
        pb_agregar_carro->setObjectName(QStringLiteral("pb_agregar_carro"));
        pb_agregar_carro->setGeometry(QRect(10, 50, 101, 31));
        pb_agregar_carro->setCursor(QCursor(Qt::PointingHandCursor));
        pb_agregar_moto = new QPushButton(Agregar_vehiculo);
        pb_agregar_moto->setObjectName(QStringLiteral("pb_agregar_moto"));
        pb_agregar_moto->setGeometry(QRect(160, 50, 101, 31));
        pb_agregar_moto->setCursor(QCursor(Qt::PointingHandCursor));
        pb_cancelar = new QPushButton(Agregar_vehiculo);
        pb_cancelar->setObjectName(QStringLiteral("pb_cancelar"));
        pb_cancelar->setGeometry(QRect(80, 90, 101, 31));
        pb_cancelar->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(Agregar_vehiculo);
        QObject::connect(pb_cancelar, SIGNAL(clicked()), Agregar_vehiculo, SLOT(close()));

        QMetaObject::connectSlotsByName(Agregar_vehiculo);
    } // setupUi

    void retranslateUi(QDialog *Agregar_vehiculo)
    {
        Agregar_vehiculo->setWindowTitle(QString());
        label->setText(QApplication::translate("Agregar_vehiculo", "Agregar Vehiculo", 0));
        pb_agregar_carro->setText(QApplication::translate("Agregar_vehiculo", "Agregar Carro", 0));
        pb_agregar_moto->setText(QApplication::translate("Agregar_vehiculo", "Agregar Moto", 0));
        pb_cancelar->setText(QApplication::translate("Agregar_vehiculo", "Cancelar", 0));
    } // retranslateUi

};

namespace Ui {
    class Agregar_vehiculo: public Ui_Agregar_vehiculo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGAR_VEHICULO_H
