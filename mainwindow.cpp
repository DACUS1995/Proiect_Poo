#include <QApplication>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QObject>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


   QObject::connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(change_text()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::change_text()
{
  QString txt = "Ai apasat pe buton!!";
  ui->textEdit->setText(txt);

}
