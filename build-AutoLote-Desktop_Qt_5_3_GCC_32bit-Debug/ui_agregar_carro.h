/********************************************************************************
** Form generated from reading UI file 'agregar_carro.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGAR_CARRO_H
#define UI_AGREGAR_CARRO_H

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

class Ui_Agregar_carro
{
public:
    QRadioButton *rb_estado_bueno_carro;
    QRadioButton *rb_estado_reparado_carro;
    QRadioButton *rb_estado_malo_carro;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QDoubleSpinBox *dsb_carro_precio_compra;
    QLabel *label_6;
    QDoubleSpinBox *dsb_carro_km_recorridos;
    QPushButton *pb_agragar_carro_cancelar;
    QPushButton *pb_agregar_carro_aceptar;
    QLabel *label_7;
    QRadioButton *rb_tipo_turismo;
    QRadioButton *rb_tipo_pickup;
    QRadioButton *rb_tipo_camioneta;
    QLineEdit *le_marca_carro;
    QLineEdit *le_placa_carro;
    QDoubleSpinBox *dsb_carro_gastos_reparacion;
    QLabel *label_8;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;

    void setupUi(QDialog *Agregar_carro)
    {
        if (Agregar_carro->objectName().isEmpty())
            Agregar_carro->setObjectName(QStringLiteral("Agregar_carro"));
        Agregar_carro->resize(537, 334);
        rb_estado_bueno_carro = new QRadioButton(Agregar_carro);
        buttonGroup = new QButtonGroup(Agregar_carro);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(rb_estado_bueno_carro);
        rb_estado_bueno_carro->setObjectName(QStringLiteral("rb_estado_bueno_carro"));
        rb_estado_bueno_carro->setGeometry(QRect(10, 170, 71, 22));
        rb_estado_reparado_carro = new QRadioButton(Agregar_carro);
        buttonGroup->addButton(rb_estado_reparado_carro);
        rb_estado_reparado_carro->setObjectName(QStringLiteral("rb_estado_reparado_carro"));
        rb_estado_reparado_carro->setGeometry(QRect(90, 170, 91, 22));
        rb_estado_malo_carro = new QRadioButton(Agregar_carro);
        buttonGroup->addButton(rb_estado_malo_carro);
        rb_estado_malo_carro->setObjectName(QStringLiteral("rb_estado_malo_carro"));
        rb_estado_malo_carro->setGeometry(QRect(190, 170, 61, 22));
        label_2 = new QLabel(Agregar_carro);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 67, 17));
        label = new QLabel(Agregar_carro);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 10, 121, 21));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label_4 = new QLabel(Agregar_carro);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 150, 111, 16));
        label_3 = new QLabel(Agregar_carro);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 70, 67, 17));
        label_5 = new QLabel(Agregar_carro);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 210, 131, 16));
        dsb_carro_precio_compra = new QDoubleSpinBox(Agregar_carro);
        dsb_carro_precio_compra->setObjectName(QStringLiteral("dsb_carro_precio_compra"));
        dsb_carro_precio_compra->setGeometry(QRect(160, 210, 111, 27));
        dsb_carro_precio_compra->setMaximum(1e+06);
        label_6 = new QLabel(Agregar_carro);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 250, 131, 16));
        dsb_carro_km_recorridos = new QDoubleSpinBox(Agregar_carro);
        dsb_carro_km_recorridos->setObjectName(QStringLiteral("dsb_carro_km_recorridos"));
        dsb_carro_km_recorridos->setGeometry(QRect(160, 250, 111, 27));
        dsb_carro_km_recorridos->setMaximum(1e+06);
        pb_agragar_carro_cancelar = new QPushButton(Agregar_carro);
        pb_agragar_carro_cancelar->setObjectName(QStringLiteral("pb_agragar_carro_cancelar"));
        pb_agragar_carro_cancelar->setGeometry(QRect(140, 290, 99, 27));
        pb_agragar_carro_cancelar->setCursor(QCursor(Qt::ClosedHandCursor));
        pb_agregar_carro_aceptar = new QPushButton(Agregar_carro);
        pb_agregar_carro_aceptar->setObjectName(QStringLiteral("pb_agregar_carro_aceptar"));
        pb_agregar_carro_aceptar->setGeometry(QRect(290, 290, 99, 27));
        pb_agregar_carro_aceptar->setCursor(QCursor(Qt::PointingHandCursor));
        label_7 = new QLabel(Agregar_carro);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 100, 91, 17));
        rb_tipo_turismo = new QRadioButton(Agregar_carro);
        buttonGroup_2 = new QButtonGroup(Agregar_carro);
        buttonGroup_2->setObjectName(QStringLiteral("buttonGroup_2"));
        buttonGroup_2->addButton(rb_tipo_turismo);
        rb_tipo_turismo->setObjectName(QStringLiteral("rb_tipo_turismo"));
        rb_tipo_turismo->setGeometry(QRect(10, 120, 81, 22));
        rb_tipo_pickup = new QRadioButton(Agregar_carro);
        buttonGroup_2->addButton(rb_tipo_pickup);
        rb_tipo_pickup->setObjectName(QStringLiteral("rb_tipo_pickup"));
        rb_tipo_pickup->setGeometry(QRect(90, 120, 71, 22));
        rb_tipo_camioneta = new QRadioButton(Agregar_carro);
        buttonGroup_2->addButton(rb_tipo_camioneta);
        rb_tipo_camioneta->setObjectName(QStringLiteral("rb_tipo_camioneta"));
        rb_tipo_camioneta->setGeometry(QRect(160, 120, 117, 22));
        le_marca_carro = new QLineEdit(Agregar_carro);
        le_marca_carro->setObjectName(QStringLiteral("le_marca_carro"));
        le_marca_carro->setGeometry(QRect(80, 40, 141, 27));
        le_placa_carro = new QLineEdit(Agregar_carro);
        le_placa_carro->setObjectName(QStringLiteral("le_placa_carro"));
        le_placa_carro->setGeometry(QRect(80, 70, 141, 27));
        dsb_carro_gastos_reparacion = new QDoubleSpinBox(Agregar_carro);
        dsb_carro_gastos_reparacion->setObjectName(QStringLiteral("dsb_carro_gastos_reparacion"));
        dsb_carro_gastos_reparacion->setEnabled(false);
        dsb_carro_gastos_reparacion->setGeometry(QRect(400, 170, 111, 27));
        dsb_carro_gastos_reparacion->setMaximum(1e+06);
        label_8 = new QLabel(Agregar_carro);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(270, 170, 131, 16));

        retranslateUi(Agregar_carro);
        QObject::connect(pb_agragar_carro_cancelar, SIGNAL(clicked()), Agregar_carro, SLOT(close()));

        QMetaObject::connectSlotsByName(Agregar_carro);
    } // setupUi

    void retranslateUi(QDialog *Agregar_carro)
    {
        Agregar_carro->setWindowTitle(QString());
        rb_estado_bueno_carro->setText(QApplication::translate("Agregar_carro", "Bueno", 0));
        rb_estado_reparado_carro->setText(QApplication::translate("Agregar_carro", "Reparado", 0));
        rb_estado_malo_carro->setText(QApplication::translate("Agregar_carro", "Malo", 0));
        label_2->setText(QApplication::translate("Agregar_carro", "Marca:", 0));
        label->setText(QApplication::translate("Agregar_carro", "Agregar Carro", 0));
        label_4->setText(QApplication::translate("Agregar_carro", "Estado del Carro", 0));
        label_3->setText(QApplication::translate("Agregar_carro", "Placa:", 0));
        label_5->setText(QApplication::translate("Agregar_carro", "Precio de Compra:", 0));
        label_6->setText(QApplication::translate("Agregar_carro", "Km Recorridos:", 0));
        pb_agragar_carro_cancelar->setText(QApplication::translate("Agregar_carro", "Cancelar", 0));
        pb_agregar_carro_aceptar->setText(QApplication::translate("Agregar_carro", "Aceptar", 0));
        label_7->setText(QApplication::translate("Agregar_carro", "Tipo de Carro", 0));
        rb_tipo_turismo->setText(QApplication::translate("Agregar_carro", "Turismo", 0));
        rb_tipo_pickup->setText(QApplication::translate("Agregar_carro", "Pickup", 0));
        rb_tipo_camioneta->setText(QApplication::translate("Agregar_carro", "Camioneta", 0));
        label_8->setText(QApplication::translate("Agregar_carro", "Gastos Reparacion", 0));
    } // retranslateUi

};

namespace Ui {
    class Agregar_carro: public Ui_Agregar_carro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGAR_CARRO_H
