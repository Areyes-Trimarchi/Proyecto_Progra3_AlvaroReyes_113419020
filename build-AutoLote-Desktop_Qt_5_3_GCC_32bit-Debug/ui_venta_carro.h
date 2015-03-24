/********************************************************************************
** Form generated from reading UI file 'venta_carro.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTA_CARRO_H
#define UI_VENTA_CARRO_H

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

class Ui_Venta_carro
{
public:
    QRadioButton *rb_tipo_camioneta_venta;
    QDoubleSpinBox *dsb_carro_precio_venta;
    QLineEdit *le_marca_carro_venta;
    QRadioButton *rb_estado_bueno_carro_venta;
    QPushButton *pb_cancelar_venta_carro;
    QLabel *label_11;
    QRadioButton *rb_tipo_pickup_venta;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QRadioButton *rb_estado_reparado_carro_venta;
    QLabel *label_3;
    QPushButton *pb_comprar_venta_carro;
    QLineEdit *le_placa_carro_venta;
    QRadioButton *rb_estado_malo_carro_venta;
    QRadioButton *rb_tipo_turismo_venta;
    QLabel *label_9;

    void setupUi(QDialog *Venta_carro)
    {
        if (Venta_carro->objectName().isEmpty())
            Venta_carro->setObjectName(QStringLiteral("Venta_carro"));
        Venta_carro->resize(567, 269);
        rb_tipo_camioneta_venta = new QRadioButton(Venta_carro);
        rb_tipo_camioneta_venta->setObjectName(QStringLiteral("rb_tipo_camioneta_venta"));
        rb_tipo_camioneta_venta->setEnabled(false);
        rb_tipo_camioneta_venta->setGeometry(QRect(170, 150, 101, 22));
        rb_tipo_camioneta_venta->setCheckable(true);
        dsb_carro_precio_venta = new QDoubleSpinBox(Venta_carro);
        dsb_carro_precio_venta->setObjectName(QStringLiteral("dsb_carro_precio_venta"));
        dsb_carro_precio_venta->setEnabled(true);
        dsb_carro_precio_venta->setGeometry(QRect(370, 130, 111, 27));
        dsb_carro_precio_venta->setReadOnly(true);
        dsb_carro_precio_venta->setMaximum(1e+06);
        le_marca_carro_venta = new QLineEdit(Venta_carro);
        le_marca_carro_venta->setObjectName(QStringLiteral("le_marca_carro_venta"));
        le_marca_carro_venta->setGeometry(QRect(90, 60, 141, 27));
        le_marca_carro_venta->setReadOnly(true);
        rb_estado_bueno_carro_venta = new QRadioButton(Venta_carro);
        rb_estado_bueno_carro_venta->setObjectName(QStringLiteral("rb_estado_bueno_carro_venta"));
        rb_estado_bueno_carro_venta->setEnabled(false);
        rb_estado_bueno_carro_venta->setGeometry(QRect(10, 210, 71, 22));
        rb_estado_bueno_carro_venta->setCheckable(true);
        pb_cancelar_venta_carro = new QPushButton(Venta_carro);
        pb_cancelar_venta_carro->setObjectName(QStringLiteral("pb_cancelar_venta_carro"));
        pb_cancelar_venta_carro->setGeometry(QRect(310, 200, 99, 27));
        pb_cancelar_venta_carro->setCursor(QCursor(Qt::PointingHandCursor));
        label_11 = new QLabel(Venta_carro);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(370, 110, 111, 20));
        rb_tipo_pickup_venta = new QRadioButton(Venta_carro);
        rb_tipo_pickup_venta->setObjectName(QStringLiteral("rb_tipo_pickup_venta"));
        rb_tipo_pickup_venta->setEnabled(false);
        rb_tipo_pickup_venta->setGeometry(QRect(90, 150, 91, 22));
        rb_tipo_pickup_venta->setCheckable(true);
        label_2 = new QLabel(Venta_carro);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 67, 17));
        label = new QLabel(Venta_carro);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 20, 131, 17));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label_4 = new QLabel(Venta_carro);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 180, 131, 16));
        rb_estado_reparado_carro_venta = new QRadioButton(Venta_carro);
        rb_estado_reparado_carro_venta->setObjectName(QStringLiteral("rb_estado_reparado_carro_venta"));
        rb_estado_reparado_carro_venta->setEnabled(false);
        rb_estado_reparado_carro_venta->setGeometry(QRect(90, 210, 91, 22));
        rb_estado_reparado_carro_venta->setCheckable(true);
        label_3 = new QLabel(Venta_carro);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 90, 67, 17));
        pb_comprar_venta_carro = new QPushButton(Venta_carro);
        pb_comprar_venta_carro->setObjectName(QStringLiteral("pb_comprar_venta_carro"));
        pb_comprar_venta_carro->setGeometry(QRect(450, 200, 99, 27));
        pb_comprar_venta_carro->setCursor(QCursor(Qt::PointingHandCursor));
        le_placa_carro_venta = new QLineEdit(Venta_carro);
        le_placa_carro_venta->setObjectName(QStringLiteral("le_placa_carro_venta"));
        le_placa_carro_venta->setGeometry(QRect(90, 90, 141, 27));
        le_placa_carro_venta->setReadOnly(true);
        rb_estado_malo_carro_venta = new QRadioButton(Venta_carro);
        rb_estado_malo_carro_venta->setObjectName(QStringLiteral("rb_estado_malo_carro_venta"));
        rb_estado_malo_carro_venta->setEnabled(false);
        rb_estado_malo_carro_venta->setGeometry(QRect(190, 210, 61, 22));
        rb_estado_malo_carro_venta->setCheckable(true);
        rb_tipo_turismo_venta = new QRadioButton(Venta_carro);
        rb_tipo_turismo_venta->setObjectName(QStringLiteral("rb_tipo_turismo_venta"));
        rb_tipo_turismo_venta->setEnabled(false);
        rb_tipo_turismo_venta->setGeometry(QRect(0, 150, 81, 22));
        rb_tipo_turismo_venta->setCheckable(true);
        label_9 = new QLabel(Venta_carro);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(90, 130, 101, 16));
        pb_cancelar_venta_carro->raise();
        rb_tipo_camioneta_venta->raise();
        dsb_carro_precio_venta->raise();
        le_marca_carro_venta->raise();
        rb_estado_bueno_carro_venta->raise();
        label_11->raise();
        rb_tipo_pickup_venta->raise();
        label_2->raise();
        label->raise();
        label_4->raise();
        rb_estado_reparado_carro_venta->raise();
        label_3->raise();
        le_placa_carro_venta->raise();
        rb_estado_malo_carro_venta->raise();
        rb_tipo_turismo_venta->raise();
        label_9->raise();
        pb_comprar_venta_carro->raise();

        retranslateUi(Venta_carro);
        QObject::connect(pb_cancelar_venta_carro, SIGNAL(clicked()), Venta_carro, SLOT(close()));

        QMetaObject::connectSlotsByName(Venta_carro);
    } // setupUi

    void retranslateUi(QDialog *Venta_carro)
    {
        Venta_carro->setWindowTitle(QApplication::translate("Venta_carro", "Dialog", 0));
        rb_tipo_camioneta_venta->setText(QApplication::translate("Venta_carro", "Camioneta", 0));
        rb_estado_bueno_carro_venta->setText(QApplication::translate("Venta_carro", "Bueno", 0));
        pb_cancelar_venta_carro->setText(QApplication::translate("Venta_carro", "Cancelar", 0));
        label_11->setText(QApplication::translate("Venta_carro", "Precio de Venta", 0));
        rb_tipo_pickup_venta->setText(QApplication::translate("Venta_carro", "Pickup", 0));
        label_2->setText(QApplication::translate("Venta_carro", "Marca:", 0));
        label->setText(QApplication::translate("Venta_carro", "Venta de Carro", 0));
        label_4->setText(QApplication::translate("Venta_carro", "Estado del Carro", 0));
        rb_estado_reparado_carro_venta->setText(QApplication::translate("Venta_carro", "Reparado", 0));
        label_3->setText(QApplication::translate("Venta_carro", "Placa:", 0));
        pb_comprar_venta_carro->setText(QApplication::translate("Venta_carro", "Comprar", 0));
        rb_estado_malo_carro_venta->setText(QApplication::translate("Venta_carro", "Malo", 0));
        rb_tipo_turismo_venta->setText(QApplication::translate("Venta_carro", "Turismo", 0));
        label_9->setText(QApplication::translate("Venta_carro", "Tipo de Carro", 0));
    } // retranslateUi

};

namespace Ui {
    class Venta_carro: public Ui_Venta_carro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTA_CARRO_H
