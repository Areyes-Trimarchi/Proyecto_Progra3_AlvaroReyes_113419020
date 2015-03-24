/********************************************************************************
** Form generated from reading UI file 'error.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERROR_H
#define UI_ERROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Error
{
public:
    QTextEdit *te_ventana_error;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Error)
    {
        if (Error->objectName().isEmpty())
            Error->setObjectName(QStringLiteral("Error"));
        Error->resize(400, 300);
        te_ventana_error = new QTextEdit(Error);
        te_ventana_error->setObjectName(QStringLiteral("te_ventana_error"));
        te_ventana_error->setEnabled(true);
        te_ventana_error->setGeometry(QRect(50, 30, 301, 161));
        te_ventana_error->setReadOnly(true);
        pushButton = new QPushButton(Error);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 220, 99, 27));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2 = new QPushButton(Error);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 330, 99, 27));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(Error);
        QObject::connect(pushButton, SIGNAL(clicked()), Error, SLOT(close()));

        QMetaObject::connectSlotsByName(Error);
    } // setupUi

    void retranslateUi(QDialog *Error)
    {
        Error->setWindowTitle(QApplication::translate("Error", "ERROR", 0));
        pushButton->setText(QApplication::translate("Error", "Ok", 0));
        pushButton_2->setText(QApplication::translate("Error", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class Error: public Ui_Error {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERROR_H
