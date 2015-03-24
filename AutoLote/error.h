#ifndef ERROR_H
#define ERROR_H

#include <QDialog>
#include <string>

using std::string;

namespace Ui {
class Error;
}

class Error : public QDialog
{
    Q_OBJECT

public:
    explicit Error(QWidget *parent = 0,string error="");
    ~Error();

private:
    Ui::Error *ui;
    string error;
};

#endif // ERROR_H
