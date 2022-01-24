#ifndef TASK2_H
#define TASK2_H

#include <QDialog>
#include <QtMath>
#include <QMessageBox>

namespace Ui {
class task2;
}

class task2 : public QDialog
{
    Q_OBJECT

public:
    explicit task2(QWidget *parent = nullptr);
    ~task2();

private slots:
    void on_closingButton_clicked();

    void on_radioButtonIsRad_clicked();

    void on_radioButtonIsDegree_clicked();

    void on_calculateButton_clicked();

private:
    Ui::task2 *ui;
};

#endif // TASK2_H
