/********************************************************************************
** Form generated from reading UI file 'modificar.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICAR_H
#define UI_MODIFICAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Modificar
{
public:
    QPushButton *pb_modificar_carro;
    QPushButton *pb_modificar_moto;
    QPushButton *pushButton_3;
    QLabel *label;

    void setupUi(QDialog *Modificar)
    {
        if (Modificar->objectName().isEmpty())
            Modificar->setObjectName(QStringLiteral("Modificar"));
        Modificar->resize(294, 139);
        pb_modificar_carro = new QPushButton(Modificar);
        pb_modificar_carro->setObjectName(QStringLiteral("pb_modificar_carro"));
        pb_modificar_carro->setGeometry(QRect(20, 50, 111, 27));
        pb_modificar_carro->setCursor(QCursor(Qt::PointingHandCursor));
        pb_modificar_moto = new QPushButton(Modificar);
        pb_modificar_moto->setObjectName(QStringLiteral("pb_modificar_moto"));
        pb_modificar_moto->setGeometry(QRect(160, 50, 111, 27));
        pb_modificar_moto->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3 = new QPushButton(Modificar);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(90, 80, 111, 27));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(Modificar);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 20, 161, 21));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        retranslateUi(Modificar);
        QObject::connect(pushButton_3, SIGNAL(clicked()), Modificar, SLOT(close()));

        QMetaObject::connectSlotsByName(Modificar);
    } // setupUi

    void retranslateUi(QDialog *Modificar)
    {
        Modificar->setWindowTitle(QString());
        pb_modificar_carro->setText(QApplication::translate("Modificar", "Modificar Carro", 0));
        pb_modificar_moto->setText(QApplication::translate("Modificar", "Modificar Moto", 0));
        pushButton_3->setText(QApplication::translate("Modificar", "Cancelar", 0));
        label->setText(QApplication::translate("Modificar", "Modificar Vehiculo", 0));
    } // retranslateUi

};

namespace Ui {
    class Modificar: public Ui_Modificar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICAR_H
