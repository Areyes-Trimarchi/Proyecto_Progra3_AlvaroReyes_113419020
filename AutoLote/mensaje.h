#ifndef MENSAJE_H
#define MENSAJE_H

#include <QDialog>
#include <string>

using std::string;

namespace Ui {
class Mensaje;
}

class Mensaje : public QDialog
{
    Q_OBJECT

public:
    explicit Mensaje(QWidget *parent = 0,string mensaje="");
    ~Mensaje();

private:
    Ui::Mensaje *ui;
    string mensaje;
};

#endif // MENSAJE_H
