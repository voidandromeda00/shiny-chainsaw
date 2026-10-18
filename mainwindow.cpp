#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

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


void MainWindow::on_pushButton_clicked(bool checked)
{
    QMessageBox::information(
                this,
                "IA REAL",
                "100% IA, NO FAKE!!!! MIRA: ''¿Puedo ayudarte en algo mas?''"
    );
}


void MainWindow::on_pushButton_2_clicked(bool checked)
{
    QMessageBox::information(
                this,
                "MENTIROSO",
                "LA IA LO HIZO, 100% REAL");
}

