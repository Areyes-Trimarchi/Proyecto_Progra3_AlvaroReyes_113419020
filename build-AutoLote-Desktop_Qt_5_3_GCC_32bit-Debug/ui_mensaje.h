/********************************************************************************
** Form generated from reading UI file 'mensaje.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENSAJE_H
#define UI_MENSAJE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Mensaje
{
public:
    QTextEdit *te_ventana_mensaje;
    QPushButton *pushButton;

    void setupUi(QDialog *Mensaje)
    {
        if (Mensaje->objectName().isEmpty())
            Mensaje->setObjectName(QStringLiteral("Mensaje"));
        Mensaje->resize(212, 141);
        te_ventana_mensaje = new QTextEdit(Mensaje);
        te_ventana_mensaje->setObjectName(QStringLiteral("te_ventana_mensaje"));
        te_ventana_mensaje->setEnabled(true);
        te_ventana_mensaje->setGeometry(QRect(10, 10, 191, 71));
        te_ventana_mensaje->setReadOnly(true);
        pushButton = new QPushButton(Mensaje);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 90, 111, 27));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(Mensaje);
        QObject::connect(pushButton, SIGNAL(clicked()), Mensaje, SLOT(close()));

        QMetaObject::connectSlotsByName(Mensaje);
    } // setupUi

    void retranslateUi(QDialog *Mensaje)
    {
        Mensaje->setWindowTitle(QApplication::translate("Mensaje", "Dialog", 0));
        pushButton->setText(QApplication::translate("Mensaje", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class Mensaje: public Ui_Mensaje {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENSAJE_H
