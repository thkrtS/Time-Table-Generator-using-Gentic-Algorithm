#ifndef RESULT_H
#define RESULT_H

#include <QMainWindow>

namespace Ui {
class Result;
}

class Result : public QMainWindow
{
    Q_OBJECT

public:
    explicit Result(QWidget *parent = nullptr);
    ~Result();

private:
    Ui::Result *ui;
};

#endif // RESULT_H
