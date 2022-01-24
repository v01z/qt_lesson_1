#include "task3.h"
#include "ui_task3window.h"

task3::task3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::task3)
{
    ui->setupUi(this);
}

task3::~task3()
{
    delete ui;
}

void task3::on_closeButton_clicked()
{
   this->close();
}


void task3::on_addButton_clicked()
{
   ui->plainTextEditDest->appendPlainText(ui->plainTextEditSrc->toPlainText());
}


void task3::on_replaceButton_clicked()
{
   ui->plainTextEditDest->setPlainText(ui->plainTextEditSrc->toPlainText());
}


void task3::on_htmlButton_clicked()
{
    bool ok;
    QString html_code = QInputDialog::getText(this,"Adding html code", "Do u want to add html code\nlike this?",
          QLineEdit::Normal, "<font color=\'red\'>Hello</font>", &ok);

    if (ok && !html_code.isEmpty())
        ui->plainTextEditDest->appendPlainText(html_code);

}

