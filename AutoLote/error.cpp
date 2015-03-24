#include "error.h"
#include "ui_error.h"
#include <string>

using std::string;

Error::Error(QWidget *parent,string error) :
    QDialog(parent),
    ui(new Ui::Error)
{
    ui->setupUi(this);
    this->error=error;
    ui->te_ventana_error->setText("");
    ui->te_ventana_error->setText(QString(this->error.c_str()));
}

Error::~Error()
{
    delete ui;
}
