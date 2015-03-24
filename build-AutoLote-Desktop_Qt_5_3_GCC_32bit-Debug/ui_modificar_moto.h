/********************************************************************************
** Form generated from reading UI file 'modificar_moto.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICAR_MOTO_H
#define UI_MODIFICAR_MOTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Modificar_moto
{
public:
    QComboBox *cb_modificar_moto;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_9;
    QPushButton *pb_agragar_moto_cancelar_modificar;
    QRadioButton *rb_estado_reparado_moto_modificar;
    QLineEdit *le_marca_moto_modificar;
    QRadioButton *rb_carretilla_si_modificar;
    QRadioButton *rb_estado_bueno_moto_modificar;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_11;
    QDoubleSpinBox *dsb_moto_gastos_reparacion_modificar;
    QRadioButton *rb_estado_bueno_carretilla_modificar;
    QRadioButton *rb_estado_malo_moto_modificar;
    QLabel *label_10;
    QDoubleSpinBox *dsb_moto_precio_compra_modificar;
    QPushButton *pb_agregar_moto_aceptar_modificar;
    QRadioButton *rb_carretilla_no_modificar;
    QDoubleSpinBox *dsb_moto_gastos_reparacion_carretilla_modificar;
    QDoubleSpinBox *dsb_moto_km_recorridos_modificar;
    QRadioButton *rb_estado_malo_carretilla_modificar;
    QRadioButton *rb_estado_reparado_carretilla_modificar;
    QLabel *label_7;
    QDoubleSpinBox *dsb_moto_precio_compra_carretilla_modificar;
    QLabel *label_4;
    QLineEdit *le_placa_moto_modificar;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;
    QButtonGroup *buttonGroup_3;

    void setupUi(QDialog *Modificar_moto)
    {
        if (Modificar_moto->objectName().isEmpty())
            Modificar_moto->setObjectName(QStringLiteral("Modificar_moto"));
        Modificar_moto->resize(576, 406);
        cb_modificar_moto = new QComboBox(Modificar_moto);
        cb_modificar_moto->setObjectName(QStringLiteral("cb_modificar_moto"));
        cb_modificar_moto->setGeometry(QRect(360, 70, 151, 27));
        label = new QLabel(Modificar_moto);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 10, 141, 21));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(Modificar_moto);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 60, 67, 17));
        label_3 = new QLabel(Modificar_moto);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 90, 67, 17));
        label_6 = new QLabel(Modificar_moto);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 320, 131, 16));
        label_9 = new QLabel(Modificar_moto);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(280, 120, 241, 16));
        pb_agragar_moto_cancelar_modificar = new QPushButton(Modificar_moto);
        pb_agragar_moto_cancelar_modificar->setObjectName(QStringLiteral("pb_agragar_moto_cancelar_modificar"));
        pb_agragar_moto_cancelar_modificar->setGeometry(QRect(160, 360, 99, 27));
        pb_agragar_moto_cancelar_modificar->setCursor(QCursor(Qt::PointingHandCursor));
        rb_estado_reparado_moto_modificar = new QRadioButton(Modificar_moto);
        buttonGroup_3 = new QButtonGroup(Modificar_moto);
        buttonGroup_3->setObjectName(QStringLiteral("buttonGroup_3"));
        buttonGroup_3->addButton(rb_estado_reparado_moto_modificar);
        rb_estado_reparado_moto_modificar->setObjectName(QStringLiteral("rb_estado_reparado_moto_modificar"));
        rb_estado_reparado_moto_modificar->setGeometry(QRect(110, 240, 91, 22));
        le_marca_moto_modificar = new QLineEdit(Modificar_moto);
        le_marca_moto_modificar->setObjectName(QStringLiteral("le_marca_moto_modificar"));
        le_marca_moto_modificar->setGeometry(QRect(100, 60, 141, 27));
        rb_carretilla_si_modificar = new QRadioButton(Modificar_moto);
        buttonGroup = new QButtonGroup(Modificar_moto);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(rb_carretilla_si_modificar);
        rb_carretilla_si_modificar->setObjectName(QStringLiteral("rb_carretilla_si_modificar"));
        rb_carretilla_si_modificar->setGeometry(QRect(60, 140, 81, 22));
        rb_estado_bueno_moto_modificar = new QRadioButton(Modificar_moto);
        buttonGroup_3->addButton(rb_estado_bueno_moto_modificar);
        rb_estado_bueno_moto_modificar->setObjectName(QStringLiteral("rb_estado_bueno_moto_modificar"));
        rb_estado_bueno_moto_modificar->setGeometry(QRect(30, 240, 71, 22));
        label_5 = new QLabel(Modificar_moto);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 280, 131, 16));
        label_8 = new QLabel(Modificar_moto);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(290, 240, 131, 16));
        label_11 = new QLabel(Modificar_moto);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(40, 160, 191, 20));
        dsb_moto_gastos_reparacion_modificar = new QDoubleSpinBox(Modificar_moto);
        dsb_moto_gastos_reparacion_modificar->setObjectName(QStringLiteral("dsb_moto_gastos_reparacion_modificar"));
        dsb_moto_gastos_reparacion_modificar->setEnabled(false);
        dsb_moto_gastos_reparacion_modificar->setGeometry(QRect(420, 240, 111, 27));
        dsb_moto_gastos_reparacion_modificar->setMaximum(1e+06);
        rb_estado_bueno_carretilla_modificar = new QRadioButton(Modificar_moto);
        buttonGroup_2 = new QButtonGroup(Modificar_moto);
        buttonGroup_2->setObjectName(QStringLiteral("buttonGroup_2"));
        buttonGroup_2->addButton(rb_estado_bueno_carretilla_modificar);
        rb_estado_bueno_carretilla_modificar->setObjectName(QStringLiteral("rb_estado_bueno_carretilla_modificar"));
        rb_estado_bueno_carretilla_modificar->setEnabled(false);
        rb_estado_bueno_carretilla_modificar->setGeometry(QRect(280, 140, 71, 22));
        rb_estado_malo_moto_modificar = new QRadioButton(Modificar_moto);
        buttonGroup_3->addButton(rb_estado_malo_moto_modificar);
        rb_estado_malo_moto_modificar->setObjectName(QStringLiteral("rb_estado_malo_moto_modificar"));
        rb_estado_malo_moto_modificar->setGeometry(QRect(210, 240, 61, 22));
        label_10 = new QLabel(Modificar_moto);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(260, 160, 191, 20));
        dsb_moto_precio_compra_modificar = new QDoubleSpinBox(Modificar_moto);
        dsb_moto_precio_compra_modificar->setObjectName(QStringLiteral("dsb_moto_precio_compra_modificar"));
        dsb_moto_precio_compra_modificar->setGeometry(QRect(180, 280, 111, 27));
        dsb_moto_precio_compra_modificar->setMaximum(1e+06);
        pb_agregar_moto_aceptar_modificar = new QPushButton(Modificar_moto);
        pb_agregar_moto_aceptar_modificar->setObjectName(QStringLiteral("pb_agregar_moto_aceptar_modificar"));
        pb_agregar_moto_aceptar_modificar->setGeometry(QRect(310, 360, 99, 27));
        pb_agregar_moto_aceptar_modificar->setCursor(QCursor(Qt::PointingHandCursor));
        rb_carretilla_no_modificar = new QRadioButton(Modificar_moto);
        buttonGroup->addButton(rb_carretilla_no_modificar);
        rb_carretilla_no_modificar->setObjectName(QStringLiteral("rb_carretilla_no_modificar"));
        rb_carretilla_no_modificar->setGeometry(QRect(140, 140, 71, 22));
        dsb_moto_gastos_reparacion_carretilla_modificar = new QDoubleSpinBox(Modificar_moto);
        dsb_moto_gastos_reparacion_carretilla_modificar->setObjectName(QStringLiteral("dsb_moto_gastos_reparacion_carretilla_modificar"));
        dsb_moto_gastos_reparacion_carretilla_modificar->setEnabled(false);
        dsb_moto_gastos_reparacion_carretilla_modificar->setGeometry(QRect(460, 160, 111, 27));
        dsb_moto_gastos_reparacion_carretilla_modificar->setMaximum(1e+06);
        dsb_moto_km_recorridos_modificar = new QDoubleSpinBox(Modificar_moto);
        dsb_moto_km_recorridos_modificar->setObjectName(QStringLiteral("dsb_moto_km_recorridos_modificar"));
        dsb_moto_km_recorridos_modificar->setGeometry(QRect(180, 320, 111, 27));
        dsb_moto_km_recorridos_modificar->setMaximum(1e+06);
        rb_estado_malo_carretilla_modificar = new QRadioButton(Modificar_moto);
        buttonGroup_2->addButton(rb_estado_malo_carretilla_modificar);
        rb_estado_malo_carretilla_modificar->setObjectName(QStringLiteral("rb_estado_malo_carretilla_modificar"));
        rb_estado_malo_carretilla_modificar->setEnabled(false);
        rb_estado_malo_carretilla_modificar->setGeometry(QRect(460, 140, 61, 22));
        rb_estado_reparado_carretilla_modificar = new QRadioButton(Modificar_moto);
        buttonGroup_2->addButton(rb_estado_reparado_carretilla_modificar);
        rb_estado_reparado_carretilla_modificar->setObjectName(QStringLiteral("rb_estado_reparado_carretilla_modificar"));
        rb_estado_reparado_carretilla_modificar->setEnabled(false);
        rb_estado_reparado_carretilla_modificar->setGeometry(QRect(360, 140, 91, 22));
        label_7 = new QLabel(Modificar_moto);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 120, 201, 17));
        dsb_moto_precio_compra_carretilla_modificar = new QDoubleSpinBox(Modificar_moto);
        dsb_moto_precio_compra_carretilla_modificar->setObjectName(QStringLiteral("dsb_moto_precio_compra_carretilla_modificar"));
        dsb_moto_precio_compra_carretilla_modificar->setEnabled(false);
        dsb_moto_precio_compra_carretilla_modificar->setGeometry(QRect(70, 180, 111, 27));
        dsb_moto_precio_compra_carretilla_modificar->setMaximum(1e+06);
        label_4 = new QLabel(Modificar_moto);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 220, 131, 16));
        le_placa_moto_modificar = new QLineEdit(Modificar_moto);
        le_placa_moto_modificar->setObjectName(QStringLiteral("le_placa_moto_modificar"));
        le_placa_moto_modificar->setGeometry(QRect(100, 90, 141, 27));

        retranslateUi(Modificar_moto);
        QObject::connect(pb_agragar_moto_cancelar_modificar, SIGNAL(clicked()), Modificar_moto, SLOT(close()));

        QMetaObject::connectSlotsByName(Modificar_moto);
    } // setupUi

    void retranslateUi(QDialog *Modificar_moto)
    {
        Modificar_moto->setWindowTitle(QString());
        label->setText(QApplication::translate("Modificar_moto", "Modificar Moto", 0));
        label_2->setText(QApplication::translate("Modificar_moto", "Marca:", 0));
        label_3->setText(QApplication::translate("Modificar_moto", "Placa:", 0));
        label_6->setText(QApplication::translate("Modificar_moto", "Km Recorridos:", 0));
        label_9->setText(QApplication::translate("Modificar_moto", "Estado de la  carretila para pasajero", 0));
        pb_agragar_moto_cancelar_modificar->setText(QApplication::translate("Modificar_moto", "Cancelar", 0));
        rb_estado_reparado_moto_modificar->setText(QApplication::translate("Modificar_moto", "Reparado", 0));
        rb_carretilla_si_modificar->setText(QApplication::translate("Modificar_moto", "Si", 0));
        rb_estado_bueno_moto_modificar->setText(QApplication::translate("Modificar_moto", "Bueno", 0));
        label_5->setText(QApplication::translate("Modificar_moto", "Precio de Compra:", 0));
        label_8->setText(QApplication::translate("Modificar_moto", "Gastos Reparacion", 0));
        label_11->setText(QApplication::translate("Modificar_moto", "Precio Compra carretilla", 0));
        rb_estado_bueno_carretilla_modificar->setText(QApplication::translate("Modificar_moto", "Bueno", 0));
        rb_estado_malo_moto_modificar->setText(QApplication::translate("Modificar_moto", "Malo", 0));
        label_10->setText(QApplication::translate("Modificar_moto", "Gastos Reparacion carretilla", 0));
        pb_agregar_moto_aceptar_modificar->setText(QApplication::translate("Modificar_moto", "Aceptar", 0));
        rb_carretilla_no_modificar->setText(QApplication::translate("Modificar_moto", "No", 0));
        rb_estado_malo_carretilla_modificar->setText(QApplication::translate("Modificar_moto", "Malo", 0));
        rb_estado_reparado_carretilla_modificar->setText(QApplication::translate("Modificar_moto", "Reparado", 0));
        label_7->setText(QApplication::translate("Modificar_moto", "Trae Carretila para pasajero?", 0));
        label_4->setText(QApplication::translate("Modificar_moto", "Estado de l a Moto", 0));
    } // retranslateUi

};

namespace Ui {
    class Modificar_moto: public Ui_Modificar_moto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICAR_MOTO_H
