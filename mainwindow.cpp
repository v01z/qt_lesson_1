#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./task1.h"
#include "./task2.h"
#include "./task3.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_exitButton_clicked()
{
   QApplication::quit();
}


void MainWindow::on_task3Button_clicked()
{
   task3 window;
   window.setModal(true);
   window.exec();
}


void MainWindow::on_task1Button_clicked()
{

    task1 window;
    window.setModal(true);
    window.exec();



}


void MainWindow::on_task2Button_clicked()
{
    task2 window;
    window.setModal(true);
    window.exec();

}

