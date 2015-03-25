/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pb_agregar_vehiculo;
    QPushButton *pb_modificar_vehiculo;
    QPushButton *pb_venta_vehiculo;
    QPushButton *pb_inventario;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(365, 207);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 20, 91, 21));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 0, 231, 21));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        pb_agregar_vehiculo = new QPushButton(centralWidget);
        pb_agregar_vehiculo->setObjectName(QStringLiteral("pb_agregar_vehiculo"));
        pb_agregar_vehiculo->setGeometry(QRect(20, 50, 141, 31));
        pb_agregar_vehiculo->setCursor(QCursor(Qt::PointingHandCursor));
        pb_modificar_vehiculo = new QPushButton(centralWidget);
        pb_modificar_vehiculo->setObjectName(QStringLiteral("pb_modificar_vehiculo"));
        pb_modificar_vehiculo->setGeometry(QRect(20, 90, 141, 31));
        pb_modificar_vehiculo->setCursor(QCursor(Qt::PointingHandCursor));
        pb_venta_vehiculo = new QPushButton(centralWidget);
        pb_venta_vehiculo->setObjectName(QStringLiteral("pb_venta_vehiculo"));
        pb_venta_vehiculo->setGeometry(QRect(200, 50, 141, 31));
        pb_venta_vehiculo->setCursor(QCursor(Qt::PointingHandCursor));
        pb_inventario = new QPushButton(centralWidget);
        pb_inventario->setObjectName(QStringLiteral("pb_inventario"));
        pb_inventario->setGeometry(QRect(200, 90, 141, 31));
        pb_inventario->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 365, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QString());
        label->setText(QApplication::translate("MainWindow", "Bienvenido", 0));
        label_2->setText(QApplication::translate("MainWindow", "Autolote El Buen Vehiculo", 0));
        pb_agregar_vehiculo->setText(QApplication::translate("MainWindow", "Agregar Vehiculo", 0));
        pb_modificar_vehiculo->setText(QApplication::translate("MainWindow", "Modificar Vehiculo", 0));
        pb_venta_vehiculo->setText(QApplication::translate("MainWindow", "Venta Vehiculo", 0));
        pb_inventario->setText(QApplication::translate("MainWindow", "Inventario", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
