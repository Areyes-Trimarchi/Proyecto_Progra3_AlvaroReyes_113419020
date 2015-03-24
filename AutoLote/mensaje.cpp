#include "mensaje.h"
#include "ui_mensaje.h"
#include <string>

using std::string;

Mensaje::Mensaje(QWidget *parent,string mensaje) :
    QDialog(parent),
    ui(new Ui::Mensaje)
{
    ui->setupUi(this);
    this->mensaje=mensaje;
    ui->te_ventana_mensaje->setText("");
    ui->te_ventana_mensaje->setText(QString(this->mensaje.c_str()));
}

Mensaje::~Mensaje()
{
    delete ui;
}
