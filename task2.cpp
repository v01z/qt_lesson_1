#include "task2.h"
#include "ui_task2window.h"

task2::task2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::task2)
{
    ui->setupUi(this);
}

task2::~task2()
{
    delete ui;
}

void task2::on_closingButton_clicked()
{
   close();
}


void task2::on_radioButtonIsRad_clicked()
{
   ui->labelMessure->setText("rad");
}


void task2::on_radioButtonIsDegree_clicked()
{
   ui->labelMessure->setText("degree");
}


void task2::on_calculateButton_clicked()
{
   if (ui->textEditAngleVal->toPlainText().isEmpty() ||
           ui->textEditSideB->toPlainText().isEmpty() ||
            ui->textEditSideC->toPlainText().isEmpty()) {

       QMessageBox::warning(this, "Be careful", "Do not left data empty.");
       return;
   }

   float a {};
   float b { ui->textEditSideB->toPlainText().toFloat() };
   float c { ui->textEditSideC->toPlainText().toFloat() };
   float alpha { ui->textEditAngleVal->toPlainText().toFloat() };

   if (ui->radioButtonIsDegree->isChecked())
       alpha = qDegreesToRadians(alpha);

   a = qSqrt(b * b + c * c - 2 * b * c * qCos(alpha));

   ui->labelResult->setText(QString::number(a));

}

