/********************************************************************************
** Form generated from reading UI file 'modificar_carro.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICAR_CARRO_H
#define UI_MODIFICAR_CARRO_H

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

class Ui_Modificar_carro
{
public:
    QComboBox *cb_modificar_carro;
    QLabel *label_4;
    QLabel *label_2;
    QDoubleSpinBox *dsb_carro_km_recorridos_modificar;
    QPushButton *pb_modificar_carro_cancelar;
    QRadioButton *rb_tipo_camioneta_modificar;
    QRadioButton *rb_tipo_pickup_modificar;
    QPushButton *pb_modificar_carro_aceptar;
    QLabel *label_5;
    QLineEdit *le_placa_carro_modificar;
    QRadioButton *rb_tipo_turismo_modificar;
    QRadioButton *rb_estado_bueno_carro_modificar;
    QDoubleSpinBox *dsb_carro_precio_compra_modificar;
    QRadioButton *rb_estado_malo_carro_modificar;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_3;
    QRadioButton *rb_estado_reparado_carro_modificar;
    QLineEdit *le_marca_carro_modificar;
    QDoubleSpinBox *dsb_carro_gastos_reparacion_modificar;
    QLabel *label;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;

    void setupUi(QDialog *Modificar_carro)
    {
        if (Modificar_carro->objectName().isEmpty())
            Modificar_carro->setObjectName(QStringLiteral("Modificar_carro"));
        Modificar_carro->resize(555, 353);
        cb_modificar_carro = new QComboBox(Modificar_carro);
        cb_modificar_carro->setObjectName(QStringLiteral("cb_modificar_carro"));
        cb_modificar_carro->setGeometry(QRect(350, 80, 141, 27));
        label_4 = new QLabel(Modificar_carro);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 180, 111, 16));
        label_2 = new QLabel(Modificar_carro);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 67, 17));
        dsb_carro_km_recorridos_modificar = new QDoubleSpinBox(Modificar_carro);
        dsb_carro_km_recorridos_modificar->setObjectName(QStringLiteral("dsb_carro_km_recorridos_modificar"));
        dsb_carro_km_recorridos_modificar->setGeometry(QRect(170, 280, 111, 27));
        dsb_carro_km_recorridos_modificar->setMaximum(1e+06);
        pb_modificar_carro_cancelar = new QPushButton(Modificar_carro);
        pb_modificar_carro_cancelar->setObjectName(QStringLiteral("pb_modificar_carro_cancelar"));
        pb_modificar_carro_cancelar->setGeometry(QRect(150, 320, 99, 27));
        pb_modificar_carro_cancelar->setCursor(QCursor(Qt::ClosedHandCursor));
        rb_tipo_camioneta_modificar = new QRadioButton(Modificar_carro);
        buttonGroup = new QButtonGroup(Modificar_carro);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(rb_tipo_camioneta_modificar);
        rb_tipo_camioneta_modificar->setObjectName(QStringLiteral("rb_tipo_camioneta_modificar"));
        rb_tipo_camioneta_modificar->setGeometry(QRect(170, 150, 117, 22));
        rb_tipo_pickup_modificar = new QRadioButton(Modificar_carro);
        buttonGroup->addButton(rb_tipo_pickup_modificar);
        rb_tipo_pickup_modificar->setObjectName(QStringLiteral("rb_tipo_pickup_modificar"));
        rb_tipo_pickup_modificar->setGeometry(QRect(100, 150, 71, 22));
        pb_modificar_carro_aceptar = new QPushButton(Modificar_carro);
        pb_modificar_carro_aceptar->setObjectName(QStringLiteral("pb_modificar_carro_aceptar"));
        pb_modificar_carro_aceptar->setGeometry(QRect(300, 320, 99, 27));
        pb_modificar_carro_aceptar->setCursor(QCursor(Qt::PointingHandCursor));
        label_5 = new QLabel(Modificar_carro);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 240, 131, 16));
        le_placa_carro_modificar = new QLineEdit(Modificar_carro);
        le_placa_carro_modificar->setObjectName(QStringLiteral("le_placa_carro_modificar"));
        le_placa_carro_modificar->setGeometry(QRect(90, 100, 141, 27));
        rb_tipo_turismo_modificar = new QRadioButton(Modificar_carro);
        buttonGroup->addButton(rb_tipo_turismo_modificar);
        rb_tipo_turismo_modificar->setObjectName(QStringLiteral("rb_tipo_turismo_modificar"));
        rb_tipo_turismo_modificar->setGeometry(QRect(20, 150, 81, 22));
        rb_estado_bueno_carro_modificar = new QRadioButton(Modificar_carro);
        buttonGroup_2 = new QButtonGroup(Modificar_carro);
        buttonGroup_2->setObjectName(QStringLiteral("buttonGroup_2"));
        buttonGroup_2->addButton(rb_estado_bueno_carro_modificar);
        rb_estado_bueno_carro_modificar->setObjectName(QStringLiteral("rb_estado_bueno_carro_modificar"));
        rb_estado_bueno_carro_modificar->setGeometry(QRect(20, 200, 71, 22));
        dsb_carro_precio_compra_modificar = new QDoubleSpinBox(Modificar_carro);
        dsb_carro_precio_compra_modificar->setObjectName(QStringLiteral("dsb_carro_precio_compra_modificar"));
        dsb_carro_precio_compra_modificar->setGeometry(QRect(170, 240, 111, 27));
        dsb_carro_precio_compra_modificar->setMaximum(1e+06);
        rb_estado_malo_carro_modificar = new QRadioButton(Modificar_carro);
        buttonGroup_2->addButton(rb_estado_malo_carro_modificar);
        rb_estado_malo_carro_modificar->setObjectName(QStringLiteral("rb_estado_malo_carro_modificar"));
        rb_estado_malo_carro_modificar->setGeometry(QRect(200, 200, 61, 22));
        label_6 = new QLabel(Modificar_carro);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 280, 131, 16));
        label_7 = new QLabel(Modificar_carro);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 130, 91, 17));
        label_8 = new QLabel(Modificar_carro);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(280, 200, 131, 16));
        label_3 = new QLabel(Modificar_carro);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 67, 17));
        rb_estado_reparado_carro_modificar = new QRadioButton(Modificar_carro);
        buttonGroup_2->addButton(rb_estado_reparado_carro_modificar);
        rb_estado_reparado_carro_modificar->setObjectName(QStringLiteral("rb_estado_reparado_carro_modificar"));
        rb_estado_reparado_carro_modificar->setGeometry(QRect(100, 200, 91, 22));
        le_marca_carro_modificar = new QLineEdit(Modificar_carro);
        le_marca_carro_modificar->setObjectName(QStringLiteral("le_marca_carro_modificar"));
        le_marca_carro_modificar->setGeometry(QRect(90, 70, 141, 27));
        dsb_carro_gastos_reparacion_modificar = new QDoubleSpinBox(Modificar_carro);
        dsb_carro_gastos_reparacion_modificar->setObjectName(QStringLiteral("dsb_carro_gastos_reparacion_modificar"));
        dsb_carro_gastos_reparacion_modificar->setEnabled(false);
        dsb_carro_gastos_reparacion_modificar->setGeometry(QRect(410, 200, 111, 27));
        dsb_carro_gastos_reparacion_modificar->setMaximum(1e+06);
        label = new QLabel(Modificar_carro);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 20, 141, 21));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        retranslateUi(Modificar_carro);
        QObject::connect(pb_modificar_carro_cancelar, SIGNAL(clicked()), Modificar_carro, SLOT(close()));

        QMetaObject::connectSlotsByName(Modificar_carro);
    } // setupUi

    void retranslateUi(QDialog *Modificar_carro)
    {
        Modificar_carro->setWindowTitle(QString());
        label_4->setText(QApplication::translate("Modificar_carro", "Estado del Carro", 0));
        label_2->setText(QApplication::translate("Modificar_carro", "Marca:", 0));
        pb_modificar_carro_cancelar->setText(QApplication::translate("Modificar_carro", "Cancelar", 0));
        rb_tipo_camioneta_modificar->setText(QApplication::translate("Modificar_carro", "Camioneta", 0));
        rb_tipo_pickup_modificar->setText(QApplication::translate("Modificar_carro", "Pickup", 0));
        pb_modificar_carro_aceptar->setText(QApplication::translate("Modificar_carro", "Aceptar", 0));
        label_5->setText(QApplication::translate("Modificar_carro", "Precio de Compra:", 0));
        rb_tipo_turismo_modificar->setText(QApplication::translate("Modificar_carro", "Turismo", 0));
        rb_estado_bueno_carro_modificar->setText(QApplication::translate("Modificar_carro", "Bueno", 0));
        rb_estado_malo_carro_modificar->setText(QApplication::translate("Modificar_carro", "Malo", 0));
        label_6->setText(QApplication::translate("Modificar_carro", "Km Recorridos:", 0));
        label_7->setText(QApplication::translate("Modificar_carro", "Tipo de Carro", 0));
        label_8->setText(QApplication::translate("Modificar_carro", "Gastos Reparacion", 0));
        label_3->setText(QApplication::translate("Modificar_carro", "Placa:", 0));
        rb_estado_reparado_carro_modificar->setText(QApplication::translate("Modificar_carro", "Reparado", 0));
        label->setText(QApplication::translate("Modificar_carro", "Modificar Carro", 0));
    } // retranslateUi

};

namespace Ui {
    class Modificar_carro: public Ui_Modificar_carro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICAR_CARRO_H
