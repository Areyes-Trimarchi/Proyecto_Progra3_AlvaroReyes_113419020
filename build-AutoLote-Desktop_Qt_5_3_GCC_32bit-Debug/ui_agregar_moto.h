/********************************************************************************
** Form generated from reading UI file 'agregar_moto.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGAR_MOTO_H
#define UI_AGREGAR_MOTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Agregar_moto
{
public:
    QPushButton *pb_agragar_moto_cancelar;
    QLabel *label_8;
    QRadioButton *rb_carretilla_si;
    QRadioButton *rb_estado_reparado_moto;
    QLabel *label_4;
    QRadioButton *rb_estado_bueno_moto;
    QLabel *label;
    QLineEdit *le_placa_moto;
    QDoubleSpinBox *dsb_moto_precio_compra;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_5;
    QDoubleSpinBox *dsb_moto_km_recorridos;
    QDoubleSpinBox *dsb_moto_gastos_reparacion;
    QRadioButton *rb_estado_malo_moto;
    QPushButton *pb_agregar_moto_aceptar;
    QLineEdit *le_marca_moto;
    QRadioButton *rb_carretilla_no;
    QLabel *label_6;
    QLabel *label_7;
    QRadioButton *rb_estado_reparado_carretilla;
    QLabel *label_9;
    QRadioButton *rb_estado_bueno_carretilla;
    QRadioButton *rb_estado_malo_carretilla;
    QLabel *label_10;
    QDoubleSpinBox *dsb_moto_gastos_reparacion_carretilla;
    QDoubleSpinBox *dsb_moto_precio_compra_carretilla;
    QLabel *label_11;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;
    QButtonGroup *buttonGroup_3;

    void setupUi(QDialog *Agregar_moto)
    {
        if (Agregar_moto->objectName().isEmpty())
            Agregar_moto->setObjectName(QStringLiteral("Agregar_moto"));
        Agregar_moto->resize(556, 377);
        pb_agragar_moto_cancelar = new QPushButton(Agregar_moto);
        pb_agragar_moto_cancelar->setObjectName(QStringLiteral("pb_agragar_moto_cancelar"));
        pb_agragar_moto_cancelar->setGeometry(QRect(140, 350, 99, 27));
        pb_agragar_moto_cancelar->setCursor(QCursor(Qt::ClosedHandCursor));
        label_8 = new QLabel(Agregar_moto);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(270, 230, 131, 16));
        rb_carretilla_si = new QRadioButton(Agregar_moto);
        buttonGroup = new QButtonGroup(Agregar_moto);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(rb_carretilla_si);
        rb_carretilla_si->setObjectName(QStringLiteral("rb_carretilla_si"));
        rb_carretilla_si->setGeometry(QRect(40, 130, 81, 22));
        rb_estado_reparado_moto = new QRadioButton(Agregar_moto);
        buttonGroup_2 = new QButtonGroup(Agregar_moto);
        buttonGroup_2->setObjectName(QStringLiteral("buttonGroup_2"));
        buttonGroup_2->addButton(rb_estado_reparado_moto);
        rb_estado_reparado_moto->setObjectName(QStringLiteral("rb_estado_reparado_moto"));
        rb_estado_reparado_moto->setGeometry(QRect(90, 230, 91, 22));
        label_4 = new QLabel(Agregar_moto);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 210, 131, 16));
        rb_estado_bueno_moto = new QRadioButton(Agregar_moto);
        buttonGroup_2->addButton(rb_estado_bueno_moto);
        rb_estado_bueno_moto->setObjectName(QStringLiteral("rb_estado_bueno_moto"));
        rb_estado_bueno_moto->setGeometry(QRect(10, 230, 71, 22));
        label = new QLabel(Agregar_moto);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 10, 121, 21));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        le_placa_moto = new QLineEdit(Agregar_moto);
        le_placa_moto->setObjectName(QStringLiteral("le_placa_moto"));
        le_placa_moto->setGeometry(QRect(80, 80, 141, 27));
        dsb_moto_precio_compra = new QDoubleSpinBox(Agregar_moto);
        dsb_moto_precio_compra->setObjectName(QStringLiteral("dsb_moto_precio_compra"));
        dsb_moto_precio_compra->setGeometry(QRect(160, 270, 111, 27));
        dsb_moto_precio_compra->setMaximum(1e+06);
        label_3 = new QLabel(Agregar_moto);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 80, 67, 17));
        label_2 = new QLabel(Agregar_moto);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 67, 17));
        label_5 = new QLabel(Agregar_moto);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 270, 131, 16));
        dsb_moto_km_recorridos = new QDoubleSpinBox(Agregar_moto);
        dsb_moto_km_recorridos->setObjectName(QStringLiteral("dsb_moto_km_recorridos"));
        dsb_moto_km_recorridos->setGeometry(QRect(160, 310, 111, 27));
        dsb_moto_km_recorridos->setMaximum(1e+06);
        dsb_moto_gastos_reparacion = new QDoubleSpinBox(Agregar_moto);
        dsb_moto_gastos_reparacion->setObjectName(QStringLiteral("dsb_moto_gastos_reparacion"));
        dsb_moto_gastos_reparacion->setEnabled(false);
        dsb_moto_gastos_reparacion->setGeometry(QRect(400, 230, 111, 27));
        dsb_moto_gastos_reparacion->setMaximum(1e+06);
        rb_estado_malo_moto = new QRadioButton(Agregar_moto);
        buttonGroup_2->addButton(rb_estado_malo_moto);
        rb_estado_malo_moto->setObjectName(QStringLiteral("rb_estado_malo_moto"));
        rb_estado_malo_moto->setGeometry(QRect(190, 230, 61, 22));
        pb_agregar_moto_aceptar = new QPushButton(Agregar_moto);
        pb_agregar_moto_aceptar->setObjectName(QStringLiteral("pb_agregar_moto_aceptar"));
        pb_agregar_moto_aceptar->setGeometry(QRect(290, 350, 99, 27));
        pb_agregar_moto_aceptar->setCursor(QCursor(Qt::PointingHandCursor));
        le_marca_moto = new QLineEdit(Agregar_moto);
        le_marca_moto->setObjectName(QStringLiteral("le_marca_moto"));
        le_marca_moto->setGeometry(QRect(80, 50, 141, 27));
        rb_carretilla_no = new QRadioButton(Agregar_moto);
        buttonGroup->addButton(rb_carretilla_no);
        rb_carretilla_no->setObjectName(QStringLiteral("rb_carretilla_no"));
        rb_carretilla_no->setGeometry(QRect(120, 130, 71, 22));
        label_6 = new QLabel(Agregar_moto);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 310, 131, 16));
        label_7 = new QLabel(Agregar_moto);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 110, 201, 17));
        rb_estado_reparado_carretilla = new QRadioButton(Agregar_moto);
        buttonGroup_3 = new QButtonGroup(Agregar_moto);
        buttonGroup_3->setObjectName(QStringLiteral("buttonGroup_3"));
        buttonGroup_3->addButton(rb_estado_reparado_carretilla);
        rb_estado_reparado_carretilla->setObjectName(QStringLiteral("rb_estado_reparado_carretilla"));
        rb_estado_reparado_carretilla->setEnabled(false);
        rb_estado_reparado_carretilla->setGeometry(QRect(340, 130, 91, 22));
        label_9 = new QLabel(Agregar_moto);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(260, 110, 241, 16));
        rb_estado_bueno_carretilla = new QRadioButton(Agregar_moto);
        buttonGroup_3->addButton(rb_estado_bueno_carretilla);
        rb_estado_bueno_carretilla->setObjectName(QStringLiteral("rb_estado_bueno_carretilla"));
        rb_estado_bueno_carretilla->setEnabled(false);
        rb_estado_bueno_carretilla->setGeometry(QRect(260, 130, 71, 22));
        rb_estado_malo_carretilla = new QRadioButton(Agregar_moto);
        buttonGroup_3->addButton(rb_estado_malo_carretilla);
        rb_estado_malo_carretilla->setObjectName(QStringLiteral("rb_estado_malo_carretilla"));
        rb_estado_malo_carretilla->setEnabled(false);
        rb_estado_malo_carretilla->setGeometry(QRect(440, 130, 61, 22));
        label_10 = new QLabel(Agregar_moto);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(240, 150, 191, 20));
        dsb_moto_gastos_reparacion_carretilla = new QDoubleSpinBox(Agregar_moto);
        dsb_moto_gastos_reparacion_carretilla->setObjectName(QStringLiteral("dsb_moto_gastos_reparacion_carretilla"));
        dsb_moto_gastos_reparacion_carretilla->setEnabled(false);
        dsb_moto_gastos_reparacion_carretilla->setGeometry(QRect(440, 150, 111, 27));
        dsb_moto_gastos_reparacion_carretilla->setMaximum(1e+06);
        dsb_moto_precio_compra_carretilla = new QDoubleSpinBox(Agregar_moto);
        dsb_moto_precio_compra_carretilla->setObjectName(QStringLiteral("dsb_moto_precio_compra_carretilla"));
        dsb_moto_precio_compra_carretilla->setEnabled(false);
        dsb_moto_precio_compra_carretilla->setGeometry(QRect(50, 170, 111, 27));
        dsb_moto_precio_compra_carretilla->setMaximum(1e+06);
        label_11 = new QLabel(Agregar_moto);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 150, 191, 20));

        retranslateUi(Agregar_moto);
        QObject::connect(pb_agragar_moto_cancelar, SIGNAL(clicked()), Agregar_moto, SLOT(close()));

        QMetaObject::connectSlotsByName(Agregar_moto);
    } // setupUi

    void retranslateUi(QDialog *Agregar_moto)
    {
        Agregar_moto->setWindowTitle(QApplication::translate("Agregar_moto", "Dialog", 0));
        pb_agragar_moto_cancelar->setText(QApplication::translate("Agregar_moto", "Cancelar", 0));
        label_8->setText(QApplication::translate("Agregar_moto", "Gastos Reparacion", 0));
        rb_carretilla_si->setText(QApplication::translate("Agregar_moto", "Si", 0));
        rb_estado_reparado_moto->setText(QApplication::translate("Agregar_moto", "Reparado", 0));
        label_4->setText(QApplication::translate("Agregar_moto", "Estado de l a Moto", 0));
        rb_estado_bueno_moto->setText(QApplication::translate("Agregar_moto", "Bueno", 0));
        label->setText(QApplication::translate("Agregar_moto", "Agregar Moto", 0));
        label_3->setText(QApplication::translate("Agregar_moto", "Placa:", 0));
        label_2->setText(QApplication::translate("Agregar_moto", "Marca:", 0));
        label_5->setText(QApplication::translate("Agregar_moto", "Precio de Compra:", 0));
        rb_estado_malo_moto->setText(QApplication::translate("Agregar_moto", "Malo", 0));
        pb_agregar_moto_aceptar->setText(QApplication::translate("Agregar_moto", "Aceptar", 0));
        rb_carretilla_no->setText(QApplication::translate("Agregar_moto", "No", 0));
        label_6->setText(QApplication::translate("Agregar_moto", "Km Recorridos:", 0));
        label_7->setText(QApplication::translate("Agregar_moto", "Trae Carretila para pasajero?", 0));
        rb_estado_reparado_carretilla->setText(QApplication::translate("Agregar_moto", "Reparado", 0));
        label_9->setText(QApplication::translate("Agregar_moto", "Estado de la  carretila para pasajero", 0));
        rb_estado_bueno_carretilla->setText(QApplication::translate("Agregar_moto", "Bueno", 0));
        rb_estado_malo_carretilla->setText(QApplication::translate("Agregar_moto", "Malo", 0));
        label_10->setText(QApplication::translate("Agregar_moto", "Gastos Reparacion carretilla", 0));
        label_11->setText(QApplication::translate("Agregar_moto", "Precio Compra carretilla", 0));
    } // retranslateUi

};

namespace Ui {
    class Agregar_moto: public Ui_Agregar_moto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGAR_MOTO_H
