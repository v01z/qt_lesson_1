#include "task1.h"
#include "ui_task1window.h"

task1::task1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::task1)
{
    ui->setupUi(this);
}

task1::~task1()
{
    delete ui;
}

void task1::on_closeButton_clicked()
{
   close();
}


void task1::on_calcButton_clicked()
{
    if (ui->plainTextEditA->toPlainText().isEmpty() ||
         ui->plainTextEditB->toPlainText().isEmpty() ||
            ui->plainTextEditC->toPlainText().isEmpty()) {


        QMessageBox::warning(this, "Be careful", "Do not left data empty.");
        return;
    }

    double D{}, x1{}, x2{};

    double a { ui->plainTextEditA->toPlainText().toDouble() };
    double b { ui->plainTextEditB->toPlainText().toDouble() };
    double c { ui->plainTextEditC->toPlainText().toDouble() };

    D = b * b - 4 * a * c;
    ui->resultLabelD->setText("D = " + QString::number(D));

    if (D > 0){
        x1 = ((-b) + qSqrt(D)) / (2 * a);
        x2 = ((-b) - qSqrt(D)) / (2 * a);
        ui->resultLabelX1->setText("x1 = " + QString::number(x1));
        ui->resultLabelX2->setText("x2 = " + QString::number(x2));
    }

    if (D == 0){

        x1 = -(b / (2 * a));
        ui->resultLabelX1->setText("x = " + QString::number(x1));
        ui->resultLabelX2->setVisible(false);
    }

    if (D < 0){
        ui->resultLabelX1->setText("No roots.");
        ui->resultLabelX2->setVisible(false);
    }

}

