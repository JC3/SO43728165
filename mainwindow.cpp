#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << ui->label_2->height();
    qDebug() << ui->label_3->height();
    //ui->label_3->setFixedHeight(ui->label_2->height());
}

MainWindow::~MainWindow()
{
    delete ui;
}
