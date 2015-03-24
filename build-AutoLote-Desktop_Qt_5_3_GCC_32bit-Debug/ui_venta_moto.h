/********************************************************************************
** Form generated from reading UI file 'venta_moto.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTA_MOTO_H
#define UI_VENTA_MOTO_H

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

class Ui_Venta_moto
{
public:
    QRadioButton *rb_carretilla_no_venta;
    QRadioButton *rb_estado_malo_carretilla_venta;
    QLabel *label_2;
    QRadioButton *rb_estado_bueno_carretilla_venta;
    QLineEdit *le_marca_moto_venta;
    QLabel *label_11;
    QRadioButton *rb_estado_bueno_moto_venta;
    QRadioButton *rb_estado_malo_moto_venta;
    QRadioButton *rb_estado_reparado_moto_venta;
    QLabel *label_9;
    QLineEdit *le_placa_moto_venta;
    QLabel *label_3;
    QRadioButton *rb_carretilla_si_venta;
    QLabel *label_4;
    QRadioButton *rb_estado_reparado_carretilla_venta;
    QLabel *label_7;
    QDoubleSpinBox *dsb_moto_precio_venta;
    QLabel *label;
    QPushButton *pb_cancelar_venta_moto;
    QPushButton *pb_comprar_venta_moto;
    QButtonGroup *buttonGroup_2;
    QButtonGroup *buttonGroup_3;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *Venta_moto)
    {
        if (Venta_moto->objectName().isEmpty())
            Venta_moto->setObjectName(QStringLiteral("Venta_moto"));
        Venta_moto->resize(573, 264);
        rb_carretilla_no_venta = new QRadioButton(Venta_moto);
        buttonGroup = new QButtonGroup(Venta_moto);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(rb_carretilla_no_venta);
        rb_carretilla_no_venta->setObjectName(QStringLiteral("rb_carretilla_no_venta"));
        rb_carretilla_no_venta->setEnabled(true);
        rb_carretilla_no_venta->setGeometry(QRect(120, 130, 71, 22));
        rb_carretilla_no_venta->setCheckable(false);
        rb_estado_malo_carretilla_venta = new QRadioButton(Venta_moto);
        buttonGroup_2 = new QButtonGroup(Venta_moto);
        buttonGroup_2->setObjectName(QStringLiteral("buttonGroup_2"));
        buttonGroup_2->addButton(rb_estado_malo_carretilla_venta);
        rb_estado_malo_carretilla_venta->setObjectName(QStringLiteral("rb_estado_malo_carretilla_venta"));
        rb_estado_malo_carretilla_venta->setEnabled(true);
        rb_estado_malo_carretilla_venta->setGeometry(QRect(190, 180, 61, 22));
        rb_estado_malo_carretilla_venta->setCheckable(false);
        label_2 = new QLabel(Venta_moto);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 67, 17));
        rb_estado_bueno_carretilla_venta = new QRadioButton(Venta_moto);
        buttonGroup_2->addButton(rb_estado_bueno_carretilla_venta);
        rb_estado_bueno_carretilla_venta->setObjectName(QStringLiteral("rb_estado_bueno_carretilla_venta"));
        rb_estado_bueno_carretilla_venta->setEnabled(true);
        rb_estado_bueno_carretilla_venta->setGeometry(QRect(10, 180, 71, 22));
        rb_estado_bueno_carretilla_venta->setCheckable(false);
        le_marca_moto_venta = new QLineEdit(Venta_moto);
        le_marca_moto_venta->setObjectName(QStringLiteral("le_marca_moto_venta"));
        le_marca_moto_venta->setGeometry(QRect(80, 50, 141, 27));
        le_marca_moto_venta->setReadOnly(true);
        label_11 = new QLabel(Venta_moto);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(360, 100, 111, 20));
        rb_estado_bueno_moto_venta = new QRadioButton(Venta_moto);
        buttonGroup_3 = new QButtonGroup(Venta_moto);
        buttonGroup_3->setObjectName(QStringLiteral("buttonGroup_3"));
        buttonGroup_3->addButton(rb_estado_bueno_moto_venta);
        rb_estado_bueno_moto_venta->setObjectName(QStringLiteral("rb_estado_bueno_moto_venta"));
        rb_estado_bueno_moto_venta->setEnabled(true);
        rb_estado_bueno_moto_venta->setGeometry(QRect(10, 230, 71, 22));
        rb_estado_bueno_moto_venta->setCheckable(false);
        rb_estado_malo_moto_venta = new QRadioButton(Venta_moto);
        buttonGroup_3->addButton(rb_estado_malo_moto_venta);
        rb_estado_malo_moto_venta->setObjectName(QStringLiteral("rb_estado_malo_moto_venta"));
        rb_estado_malo_moto_venta->setEnabled(true);
        rb_estado_malo_moto_venta->setGeometry(QRect(190, 230, 61, 22));
        rb_estado_malo_moto_venta->setCheckable(false);
        rb_estado_reparado_moto_venta = new QRadioButton(Venta_moto);
        buttonGroup_3->addButton(rb_estado_reparado_moto_venta);
        rb_estado_reparado_moto_venta->setObjectName(QStringLiteral("rb_estado_reparado_moto_venta"));
        rb_estado_reparado_moto_venta->setEnabled(true);
        rb_estado_reparado_moto_venta->setGeometry(QRect(90, 230, 91, 22));
        rb_estado_reparado_moto_venta->setCheckable(false);
        label_9 = new QLabel(Venta_moto);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 160, 241, 16));
        le_placa_moto_venta = new QLineEdit(Venta_moto);
        le_placa_moto_venta->setObjectName(QStringLiteral("le_placa_moto_venta"));
        le_placa_moto_venta->setGeometry(QRect(80, 80, 141, 27));
        le_placa_moto_venta->setReadOnly(true);
        label_3 = new QLabel(Venta_moto);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 80, 67, 17));
        rb_carretilla_si_venta = new QRadioButton(Venta_moto);
        buttonGroup->addButton(rb_carretilla_si_venta);
        rb_carretilla_si_venta->setObjectName(QStringLiteral("rb_carretilla_si_venta"));
        rb_carretilla_si_venta->setEnabled(true);
        rb_carretilla_si_venta->setGeometry(QRect(40, 130, 81, 22));
        rb_carretilla_si_venta->setCheckable(false);
        label_4 = new QLabel(Venta_moto);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 210, 131, 16));
        rb_estado_reparado_carretilla_venta = new QRadioButton(Venta_moto);
        buttonGroup_2->addButton(rb_estado_reparado_carretilla_venta);
        rb_estado_reparado_carretilla_venta->setObjectName(QStringLiteral("rb_estado_reparado_carretilla_venta"));
        rb_estado_reparado_carretilla_venta->setEnabled(true);
        rb_estado_reparado_carretilla_venta->setGeometry(QRect(90, 180, 91, 22));
        rb_estado_reparado_carretilla_venta->setCheckable(false);
        label_7 = new QLabel(Venta_moto);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 110, 201, 17));
        dsb_moto_precio_venta = new QDoubleSpinBox(Venta_moto);
        dsb_moto_precio_venta->setObjectName(QStringLiteral("dsb_moto_precio_venta"));
        dsb_moto_precio_venta->setEnabled(true);
        dsb_moto_precio_venta->setGeometry(QRect(360, 120, 111, 27));
        dsb_moto_precio_venta->setReadOnly(true);
        dsb_moto_precio_venta->setMaximum(1e+06);
        label = new QLabel(Venta_moto);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 10, 131, 17));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        pb_cancelar_venta_moto = new QPushButton(Venta_moto);
        pb_cancelar_venta_moto->setObjectName(QStringLiteral("pb_cancelar_venta_moto"));
        pb_cancelar_venta_moto->setGeometry(QRect(300, 190, 99, 27));
        pb_cancelar_venta_moto->setCursor(QCursor(Qt::PointingHandCursor));
        pb_comprar_venta_moto = new QPushButton(Venta_moto);
        pb_comprar_venta_moto->setObjectName(QStringLiteral("pb_comprar_venta_moto"));
        pb_comprar_venta_moto->setGeometry(QRect(440, 190, 99, 27));
        pb_comprar_venta_moto->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(Venta_moto);
        QObject::connect(pb_cancelar_venta_moto, SIGNAL(clicked()), Venta_moto, SLOT(close()));

        QMetaObject::connectSlotsByName(Venta_moto);
    } // setupUi

    void retranslateUi(QDialog *Venta_moto)
    {
        Venta_moto->setWindowTitle(QApplication::translate("Venta_moto", "Dialog", 0));
        rb_carretilla_no_venta->setText(QApplication::translate("Venta_moto", "No", 0));
        rb_estado_malo_carretilla_venta->setText(QApplication::translate("Venta_moto", "Malo", 0));
        label_2->setText(QApplication::translate("Venta_moto", "Marca:", 0));
        rb_estado_bueno_carretilla_venta->setText(QApplication::translate("Venta_moto", "Bueno", 0));
        label_11->setText(QApplication::translate("Venta_moto", "Precio de Venta", 0));
        rb_estado_bueno_moto_venta->setText(QApplication::translate("Venta_moto", "Bueno", 0));
        rb_estado_malo_moto_venta->setText(QApplication::translate("Venta_moto", "Malo", 0));
        rb_estado_reparado_moto_venta->setText(QApplication::translate("Venta_moto", "Reparado", 0));
        label_9->setText(QApplication::translate("Venta_moto", "Estado de la  carretila para pasajero", 0));
        label_3->setText(QApplication::translate("Venta_moto", "Placa:", 0));
        rb_carretilla_si_venta->setText(QApplication::translate("Venta_moto", "Si", 0));
        label_4->setText(QApplication::translate("Venta_moto", "Estado de l a Moto", 0));
        rb_estado_reparado_carretilla_venta->setText(QApplication::translate("Venta_moto", "Reparado", 0));
        label_7->setText(QApplication::translate("Venta_moto", "Trae Carretila para pasajero?", 0));
        label->setText(QApplication::translate("Venta_moto", "Venta de Moto", 0));
        pb_cancelar_venta_moto->setText(QApplication::translate("Venta_moto", "Cancelar", 0));
        pb_comprar_venta_moto->setText(QApplication::translate("Venta_moto", "Comprar", 0));
    } // retranslateUi

};

namespace Ui {
    class Venta_moto: public Ui_Venta_moto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTA_MOTO_H
