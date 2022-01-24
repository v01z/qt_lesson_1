#ifndef TASK3_H
#define TASK3_H

#include <QDialog>
#include <QInputDialog>

namespace Ui {
class task3;
}

class task3 : public QDialog
{
    Q_OBJECT

public:
    explicit task3(QWidget *parent = nullptr);
    ~task3();

private slots:
    void on_closeButton_clicked();

    void on_addButton_clicked();

    void on_replaceButton_clicked();

    void on_htmlButton_clicked();

private:
    Ui::task3 *ui;
};

#endif // TASK3_H
