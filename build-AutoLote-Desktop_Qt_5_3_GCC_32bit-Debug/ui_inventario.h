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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Inventario
{
public:
    QTableWidget *tw_vehiculo_vendidos;
    QLabel *label;
    QTableWidget *tw_vehiculo_inventario;
    QLabel *label_2;

    void setupUi(QDialog *Inventario)
    {
        if (Inventario->objectName().isEmpty())
            Inventario->setObjectName(QStringLiteral("Inventario"));
        Inventario->setEnabled(true);
        Inventario->resize(624, 300);
        Inventario->setModal(true);
        tw_vehiculo_vendidos = new QTableWidget(Inventario);
        if (tw_vehiculo_vendidos->columnCount() < 12)
            tw_vehiculo_vendidos->setColumnCount(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tw_vehiculo_vendidos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tw_vehiculo_vendidos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tw_vehiculo_vendidos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tw_vehiculo_vendidos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tw_vehiculo_vendidos->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tw_vehiculo_vendidos->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tw_vehiculo_vendidos->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tw_vehiculo_vendidos->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tw_vehiculo_vendidos->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tw_vehiculo_vendidos->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tw_vehiculo_vendidos->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tw_vehiculo_vendidos->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        tw_vehiculo_vendidos->setObjectName(QStringLiteral("tw_vehiculo_vendidos"));
        tw_vehiculo_vendidos->setEnabled(true);
        tw_vehiculo_vendidos->setGeometry(QRect(20, 190, 591, 111));
        tw_vehiculo_vendidos->setAutoScroll(true);
        tw_vehiculo_vendidos->setDragEnabled(false);
        tw_vehiculo_vendidos->setAlternatingRowColors(true);
        tw_vehiculo_vendidos->setRowCount(0);
        tw_vehiculo_vendidos->horizontalHeader()->setCascadingSectionResizes(false);
        tw_vehiculo_vendidos->horizontalHeader()->setDefaultSectionSize(160);
        tw_vehiculo_vendidos->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tw_vehiculo_vendidos->horizontalHeader()->setStretchLastSection(false);
        label = new QLabel(Inventario);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(false);
        label->setGeometry(QRect(270, 10, 91, 17));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(10, 10, 9, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(15, 15, 13, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(12, 12, 11, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(5, 5, 4, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(6, 6, 6, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        label->setPalette(palette);
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        tw_vehiculo_inventario = new QTableWidget(Inventario);
        if (tw_vehiculo_inventario->columnCount() < 12)
            tw_vehiculo_inventario->setColumnCount(12);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tw_vehiculo_inventario->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tw_vehiculo_inventario->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tw_vehiculo_inventario->setHorizontalHeaderItem(2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tw_vehiculo_inventario->setHorizontalHeaderItem(3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tw_vehiculo_inventario->setHorizontalHeaderItem(4, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tw_vehiculo_inventario->setHorizontalHeaderItem(5, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tw_vehiculo_inventario->setHorizontalHeaderItem(6, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tw_vehiculo_inventario->setHorizontalHeaderItem(7, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tw_vehiculo_inventario->setHorizontalHeaderItem(8, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tw_vehiculo_inventario->setHorizontalHeaderItem(9, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tw_vehiculo_inventario->setHorizontalHeaderItem(10, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tw_vehiculo_inventario->setHorizontalHeaderItem(11, __qtablewidgetitem23);
        tw_vehiculo_inventario->setObjectName(QStringLiteral("tw_vehiculo_inventario"));
        tw_vehiculo_inventario->setEnabled(true);
        tw_vehiculo_inventario->setGeometry(QRect(20, 40, 591, 111));
        tw_vehiculo_inventario->setDragEnabled(false);
        tw_vehiculo_inventario->setAlternatingRowColors(true);
        tw_vehiculo_inventario->setRowCount(0);
        tw_vehiculo_inventario->horizontalHeader()->setCascadingSectionResizes(false);
        tw_vehiculo_inventario->horizontalHeader()->setDefaultSectionSize(160);
        tw_vehiculo_inventario->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tw_vehiculo_inventario->horizontalHeader()->setStretchLastSection(false);
        label_2 = new QLabel(Inventario);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(false);
        label_2->setGeometry(QRect(250, 160, 171, 17));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        label_2->setPalette(palette1);
        label_2->setFont(font);

        retranslateUi(Inventario);

        QMetaObject::connectSlotsByName(Inventario);
    } // setupUi

    void retranslateUi(QDialog *Inventario)
    {
        Inventario->setWindowTitle(QString());
        QTableWidgetItem *___qtablewidgetitem = tw_vehiculo_vendidos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Inventario", "Vehiculo", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tw_vehiculo_vendidos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Inventario", "Marca", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tw_vehiculo_vendidos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Inventario", "Vehiculo", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tw_vehiculo_vendidos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Inventario", "Estado del Vehiculo", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tw_vehiculo_vendidos->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Inventario", "Gastos de Reparacion", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tw_vehiculo_vendidos->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Inventario", "Km Recorridos", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tw_vehiculo_vendidos->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Inventario", "Tipo de Carro", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tw_vehiculo_vendidos->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Inventario", "Side Car", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tw_vehiculo_vendidos->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("Inventario", "Estado de Sidecar", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tw_vehiculo_vendidos->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("Inventario", "Gastos Side Car", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tw_vehiculo_vendidos->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("Inventario", "Precio de Compra", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tw_vehiculo_vendidos->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("Inventario", "Precio de Venta", 0));
        label->setText(QApplication::translate("Inventario", "Inventario", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tw_vehiculo_inventario->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("Inventario", "Vehiculo", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tw_vehiculo_inventario->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("Inventario", "Marca", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tw_vehiculo_inventario->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QApplication::translate("Inventario", "Vehiculo", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tw_vehiculo_inventario->horizontalHeaderItem(3);
        ___qtablewidgetitem15->setText(QApplication::translate("Inventario", "Estado del Vehiculo", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tw_vehiculo_inventario->horizontalHeaderItem(4);
        ___qtablewidgetitem16->setText(QApplication::translate("Inventario", "Gastos de Reparacion", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tw_vehiculo_inventario->horizontalHeaderItem(5);
        ___qtablewidgetitem17->setText(QApplication::translate("Inventario", "Km Recorridos", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tw_vehiculo_inventario->horizontalHeaderItem(6);
        ___qtablewidgetitem18->setText(QApplication::translate("Inventario", "Tipo de Carro", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tw_vehiculo_inventario->horizontalHeaderItem(7);
        ___qtablewidgetitem19->setText(QApplication::translate("Inventario", "Side Car", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tw_vehiculo_inventario->horizontalHeaderItem(8);
        ___qtablewidgetitem20->setText(QApplication::translate("Inventario", "Estado de Sidecar", 0));
        QTableWidgetItem *___qtablewidgetitem21 = tw_vehiculo_inventario->horizontalHeaderItem(9);
        ___qtablewidgetitem21->setText(QApplication::translate("Inventario", "Gastos Side Car", 0));
        QTableWidgetItem *___qtablewidgetitem22 = tw_vehiculo_inventario->horizontalHeaderItem(10);
        ___qtablewidgetitem22->setText(QApplication::translate("Inventario", "Precio de Compra", 0));
        QTableWidgetItem *___qtablewidgetitem23 = tw_vehiculo_inventario->horizontalHeaderItem(11);
        ___qtablewidgetitem23->setText(QApplication::translate("Inventario", "Precio de Venta", 0));
        label_2->setText(QApplication::translate("Inventario", "Vehiculos Vendidos", 0));
    } // retranslateUi

};

namespace Ui {
    class Inventario: public Ui_Inventario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTARIO_H
