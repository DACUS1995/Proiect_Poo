#include <QApplication>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QObject>

#include "mainwindow.h"
#include "ui_mainwindow.h"


// constructor
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // MODEL BLEY
    // connect button to saving plot
    QObject::connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(savePlotBley()));
    // setup plot
    setupPlotBley();
    // configure scroll bars:
    ui->horizontalScrollBarBley->setRange(-500, 500);
    ui->verticalScrollBarBley->setRange(-500, 500);
    // create connection between axes and scroll bars:
    connect(ui->horizontalScrollBarBley, SIGNAL(valueChanged(int)), this, SLOT(horzScrollBarChangedBley(int)));
    connect(ui->verticalScrollBarBley, SIGNAL(valueChanged(int)), this, SLOT(vertScrollBarChangedBley(int)));
    connect(ui->plotBley->xAxis, SIGNAL(rangeChanged(QCPRange)), this, SLOT(xAxisChangedBley(QCPRange)));
    connect(ui->plotBley->yAxis, SIGNAL(rangeChanged(QCPRange)), this, SLOT(yAxisChangedBley(QCPRange)));
    // initialize axis range (and scroll bar positions via signals we just connected):
    ui->plotBley->xAxis->setRange(0, 6, Qt::AlignCenter);
    ui->plotBley->yAxis->setRange(0, 10, Qt::AlignCenter);

    // MODEL CONTOIS
    // connect button to saving plot
    QObject::connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(savePlotContois()));
    // setup plot
    setupPlotContois();
    // configure scroll bars:
    ui->horizontalScrollBarContois->setRange(-500, 500);
    ui->verticalScrollBarContois->setRange(-500, 500);
    // create connection between axes and scroll bars:
    connect(ui->horizontalScrollBarContois, SIGNAL(valueChanged(int)), this, SLOT(horzScrollBarChangedContois(int)));
    connect(ui->verticalScrollBarContois, SIGNAL(valueChanged(int)), this, SLOT(vertScrollBarChangedContois(int)));
    connect(ui->plotContois->xAxis, SIGNAL(rangeChanged(QCPRange)), this, SLOT(xAxisChangedContois(QCPRange)));
    connect(ui->plotContois->yAxis, SIGNAL(rangeChanged(QCPRange)), this, SLOT(yAxisChangedContois(QCPRange)));
    // initialize axis range (and scroll bar positions via signals we just connected):
    ui->plotContois->xAxis->setRange(0, 6, Qt::AlignCenter);
    ui->plotContois->yAxis->setRange(0, 10, Qt::AlignCenter);

    // MODEL DCMSS
    // connect button to saving plot
    QObject::connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(savePlotDcmss()));
    // setup plot
    setupPlotDcmss();
    // configure scroll bars:
    ui->horizontalScrollBarDcmss->setRange(-500, 500);
    ui->verticalScrollBarDcmss->setRange(-500, 500);
    // create connection between axes and scroll bars:
    connect(ui->horizontalScrollBarDcmss, SIGNAL(valueChanged(int)), this, SLOT(horzScrollBarChangedDcmss(int)));
    connect(ui->verticalScrollBarDcmss, SIGNAL(valueChanged(int)), this, SLOT(vertScrollBarChangedDcmss(int)));
    connect(ui->plotDcmss->xAxis, SIGNAL(rangeChanged(QCPRange)), this, SLOT(xAxisChangedDcmss(QCPRange)));
    connect(ui->plotDcmss->yAxis, SIGNAL(rangeChanged(QCPRange)), this, SLOT(yAxisChangedDcmss(QCPRange)));
    // initialize axis range (and scroll bar positions via signals we just connected):
    ui->plotDcmss->xAxis->setRange(0, 6, Qt::AlignCenter);
    ui->plotDcmss->yAxis->setRange(0, 10, Qt::AlignCenter);

    // MODEL OLSSON
    // connect button to saving plot
    QObject::connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(savePlotOlsson()));
    // setup plot
    setupPlotOlsson();
    // configure scroll bars:
    ui->horizontalScrollBarOlsson->setRange(-500, 500);
    ui->verticalScrollBarOlsson->setRange(-500, 500);
    // create connection between axes and scroll bars:
    connect(ui->horizontalScrollBarOlsson, SIGNAL(valueChanged(int)), this, SLOT(horzScrollBarChangedOlsson(int)));
    connect(ui->verticalScrollBarOlsson, SIGNAL(valueChanged(int)), this, SLOT(vertScrollBarChangedOlsson(int)));
    connect(ui->plotOlsson->xAxis, SIGNAL(rangeChanged(QCPRange)), this, SLOT(xAxisChangedOlsson(QCPRange)));
    connect(ui->plotOlsson->yAxis, SIGNAL(rangeChanged(QCPRange)), this, SLOT(yAxisChangedOlsson(QCPRange)));
    // initialize axis range (and scroll bar positions via signals we just connected):
    ui->plotOlsson->xAxis->setRange(0, 6, Qt::AlignCenter);
    ui->plotOlsson->yAxis->setRange(0, 10, Qt::AlignCenter);

    // MODEL TEISSIER
    // connect button to saving plot
    QObject::connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(savePlotTeissier()));
    // setup plot
    setupPlotTeissier();
    // configure scroll bars:
    ui->horizontalScrollBarTeissier->setRange(-500, 500);
    ui->verticalScrollBarTeissier->setRange(-500, 500);
    // create connection between axes and scroll bars:
    connect(ui->horizontalScrollBarTeissier, SIGNAL(valueChanged(int)), this, SLOT(horzScrollBarChangedTeissier(int)));
    connect(ui->verticalScrollBarTeissier, SIGNAL(valueChanged(int)), this, SLOT(vertScrollBarChangedTeissier(int)));
    connect(ui->plotTeissier->xAxis, SIGNAL(rangeChanged(QCPRange)), this, SLOT(xAxisChangedTeissier(QCPRange)));
    connect(ui->plotTeissier->yAxis, SIGNAL(rangeChanged(QCPRange)), this, SLOT(yAxisChangedTeissier(QCPRange)));
    // initialize axis range (and scroll bar positions via signals we just connected):
    ui->plotTeissier->xAxis->setRange(0, 6, Qt::AlignCenter);
    ui->plotTeissier->yAxis->setRange(0, 10, Qt::AlignCenter);
}

// destructor
MainWindow::~MainWindow()
{
    delete ui;
}


// methods for Bley
void MainWindow::savePlotBley()
{
    ui->plotBley->grab().save("plot4.png");
    QString txt = "Imaginea a fost salvata";
    ui->textEdit_5->setText(txt);
}

void MainWindow::setupPlotBley()
{
  ui->plotBley->addGraph();
  ui->plotBley->graph()->setPen(QPen(Qt::blue));
  ui->plotBley->graph()->setBrush(QBrush(QColor(0, 0, 255, 20)));
  ui->plotBley->addGraph();
  ui->plotBley->graph()->setPen(QPen(Qt::red));

  QVector<double> x(500), y;
  ModelBley modelBley;
  for (int i = 0; i < 500; ++i)
  {
    x[i] = i;
  }
  y = modelBley.getModel();

  ui->plotBley->graph(0)->setData(x, y);
  ui->plotBley->axisRect()->setupFullAxesBox(true);
  ui->plotBley->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
}

void MainWindow::horzScrollBarChangedBley(int value)
{
  if (qAbs(ui->plotBley->xAxis->range().center()-value/100.0) > 0.01) // if user is dragging plot, we don't want to replot twice
  {
    ui->plotBley->xAxis->setRange(value/100.0, ui->plotBley->xAxis->range().size(), Qt::AlignCenter);
    ui->plotBley->replot();
  }
}

void MainWindow::vertScrollBarChangedBley(int value)
{
  if (qAbs(ui->plotBley->yAxis->range().center()+value/100.0) > 0.01) // if user is dragging plot, we don't want to replot twice
  {
    ui->plotBley->yAxis->setRange(-value/100.0, ui->plotBley->yAxis->range().size(), Qt::AlignCenter);
    ui->plotBley->replot();
  }
}

void MainWindow::xAxisChangedBley(QCPRange range)
{
  ui->horizontalScrollBarBley->setValue(qRound(range.center()*100.0)); // adjust position of scroll bar slider
  ui->horizontalScrollBarBley->setPageStep(qRound(range.size()*100.0)); // adjust size of scroll bar slider
}

void MainWindow::yAxisChangedBley(QCPRange range)
{
  ui->verticalScrollBarBley->setValue(qRound(-range.center()*100.0)); // adjust position of scroll bar slider
  ui->verticalScrollBarBley->setPageStep(qRound(range.size()*100.0)); // adjust size of scroll bar slider
}


// methods for Contois
void MainWindow::savePlotContois()
{
    ui->plotBley->grab().save("plot2.png");
    QString txt = "Imaginea a fost salvata";
    ui->textEdit_2->setText(txt);
}

void MainWindow::setupPlotContois()
{
  ui->plotContois->addGraph();
  ui->plotContois->graph()->setPen(QPen(Qt::blue));
  ui->plotContois->graph()->setBrush(QBrush(QColor(0, 0, 255, 20)));
  ui->plotContois->addGraph();
  ui->plotContois->graph()->setPen(QPen(Qt::red));

  QVector<double> x(500), y;
  ModelContois modelContois;
  for (int i = 0; i < 500; ++i)
  {
    x[i] = i;
  }
  y = modelContois.getModel();

  ui->plotContois->graph(0)->setData(x, y);
  ui->plotContois->axisRect()->setupFullAxesBox(true);
  ui->plotContois->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
}

void MainWindow::horzScrollBarChangedContois(int value)
{
  if (qAbs(ui->plotContois->xAxis->range().center()-value/100.0) > 0.01) // if user is dragging plot, we don't want to replot twice
  {
    ui->plotContois->xAxis->setRange(value/100.0, ui->plotContois->xAxis->range().size(), Qt::AlignCenter);
    ui->plotContois->replot();
  }
}

void MainWindow::vertScrollBarChangedContois(int value)
{
  if (qAbs(ui->plotContois->yAxis->range().center()+value/100.0) > 0.01) // if user is dragging plot, we don't want to replot twice
  {
    ui->plotContois->yAxis->setRange(-value/100.0, ui->plotContois->yAxis->range().size(), Qt::AlignCenter);
    ui->plotContois->replot();
  }
}

void MainWindow::xAxisChangedContois(QCPRange range)
{
  ui->horizontalScrollBarContois->setValue(qRound(range.center()*100.0)); // adjust position of scroll bar slider
  ui->horizontalScrollBarContois->setPageStep(qRound(range.size()*100.0)); // adjust size of scroll bar slider
}

void MainWindow::yAxisChangedContois(QCPRange range)
{
  ui->verticalScrollBarContois->setValue(qRound(-range.center()*100.0)); // adjust position of scroll bar slider
  ui->verticalScrollBarContois->setPageStep(qRound(range.size()*100.0)); // adjust size of scroll bar slider
}


// methods for DCMSS
void MainWindow::savePlotDcmss()
{
    ui->plotDcmss->grab().save("plot1.png");
    QString txt = "Imaginea a fost salvata";
    ui->textEdit->setText(txt);
}

void MainWindow::setupPlotDcmss()
{
  ui->plotDcmss->addGraph();
  ui->plotDcmss->graph()->setPen(QPen(Qt::blue));
  ui->plotDcmss->graph()->setBrush(QBrush(QColor(0, 0, 255, 20)));
  ui->plotDcmss->addGraph();
  ui->plotDcmss->graph()->setPen(QPen(Qt::red));

  QVector<double> x(500), y;
  ModelDCMSS modelDCMSS;
  for (int i = 0; i < 500; ++i)
  {
    x[i] = i;
  }
  y = modelDCMSS.getModel();

  ui->plotDcmss->graph(0)->setData(x, y);
  ui->plotDcmss->axisRect()->setupFullAxesBox(true);
  ui->plotDcmss->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
}

void MainWindow::horzScrollBarChangedDcmss(int value)
{
  if (qAbs(ui->plotDcmss->xAxis->range().center()-value/100.0) > 0.01) // if user is dragging plot, we don't want to replot twice
  {
    ui->plotDcmss->xAxis->setRange(value/100.0, ui->plotDcmss->xAxis->range().size(), Qt::AlignCenter);
    ui->plotDcmss->replot();
  }
}

void MainWindow::vertScrollBarChangedDcmss(int value)
{
  if (qAbs(ui->plotDcmss->yAxis->range().center()+value/100.0) > 0.01) // if user is dragging plot, we don't want to replot twice
  {
    ui->plotDcmss->yAxis->setRange(-value/100.0, ui->plotDcmss->yAxis->range().size(), Qt::AlignCenter);
    ui->plotDcmss->replot();
  }
}

void MainWindow::xAxisChangedDcmss(QCPRange range)
{
  ui->horizontalScrollBarDcmss->setValue(qRound(range.center()*100.0)); // adjust position of scroll bar slider
  ui->horizontalScrollBarDcmss->setPageStep(qRound(range.size()*100.0)); // adjust size of scroll bar slider
}

void MainWindow::yAxisChangedDcmss(QCPRange range)
{
  ui->verticalScrollBarDcmss->setValue(qRound(-range.center()*100.0)); // adjust position of scroll bar slider
  ui->verticalScrollBarDcmss->setPageStep(qRound(range.size()*100.0)); // adjust size of scroll bar slider
}


// methods for OLSSON
void MainWindow::savePlotOlsson()
{
    ui->plotOlsson->grab().save("plot3.png");
    QString txt = "Imaginea a fost salvata";
    ui->textEdit_3->setText(txt);
}

void MainWindow::setupPlotOlsson()
{
  ui->plotOlsson->addGraph();
  ui->plotOlsson->graph()->setPen(QPen(Qt::blue));
  ui->plotOlsson->graph()->setBrush(QBrush(QColor(0, 0, 255, 20)));
  ui->plotOlsson->addGraph();
  ui->plotOlsson->graph()->setPen(QPen(Qt::red));

  QVector<double> x(500), y;
  ModelOlsson modelOlsson;
  for (int i = 0; i < 500; ++i)
  {
    x[i] = i;
  }
  y = modelOlsson.getModel();

  ui->plotOlsson->graph(0)->setData(x, y);
  ui->plotOlsson->axisRect()->setupFullAxesBox(true);
  ui->plotOlsson->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
}

void MainWindow::horzScrollBarChangedOlsson(int value)
{
  if (qAbs(ui->plotOlsson->xAxis->range().center()-value/100.0) > 0.01) // if user is dragging plot, we don't want to replot twice
  {
    ui->plotOlsson->xAxis->setRange(value/100.0, ui->plotOlsson->xAxis->range().size(), Qt::AlignCenter);
    ui->plotOlsson->replot();
  }
}

void MainWindow::vertScrollBarChangedOlsson(int value)
{
  if (qAbs(ui->plotOlsson->yAxis->range().center()+value/100.0) > 0.01) // if user is dragging plot, we don't want to replot twice
  {
    ui->plotOlsson->yAxis->setRange(-value/100.0, ui->plotOlsson->yAxis->range().size(), Qt::AlignCenter);
    ui->plotOlsson->replot();
  }
}

void MainWindow::xAxisChangedOlsson(QCPRange range)
{
  ui->horizontalScrollBarOlsson->setValue(qRound(range.center()*100.0)); // adjust position of scroll bar slider
  ui->horizontalScrollBarOlsson->setPageStep(qRound(range.size()*100.0)); // adjust size of scroll bar slider
}

void MainWindow::yAxisChangedOlsson(QCPRange range)
{
  ui->verticalScrollBarOlsson->setValue(qRound(-range.center()*100.0)); // adjust position of scroll bar slider
  ui->verticalScrollBarOlsson->setPageStep(qRound(range.size()*100.0)); // adjust size of scroll bar slider
}


// methods for TEISSIER
void MainWindow::savePlotTeissier()
{
    ui->plotTeissier->grab().save("plot5.png");
    QString txt = "Imaginea a fost salvata";
    ui->textEdit_4->setText(txt);
}

void MainWindow::setupPlotTeissier()
{
  ui->plotTeissier->addGraph();
  ui->plotTeissier->graph()->setPen(QPen(Qt::blue));
  ui->plotTeissier->graph()->setBrush(QBrush(QColor(0, 0, 255, 20)));
  ui->plotTeissier->addGraph();
  ui->plotTeissier->graph()->setPen(QPen(Qt::red));

  QVector<double> x(500), y;
  ModelTeissier modelTeissier;
  for (int i = 0; i < 500; ++i)
  {
    x[i] = i;
  }
  y = modelTeissier.getModel();

  ui->plotTeissier->graph(0)->setData(x, y);
  ui->plotTeissier->axisRect()->setupFullAxesBox(true);
  ui->plotTeissier->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
}

void MainWindow::horzScrollBarChangedTeissier(int value)
{
  if (qAbs(ui->plotTeissier->xAxis->range().center()-value/100.0) > 0.01) // if user is dragging plot, we don't want to replot twice
  {
    ui->plotTeissier->xAxis->setRange(value/100.0, ui->plotTeissier->xAxis->range().size(), Qt::AlignCenter);
    ui->plotTeissier->replot();
  }
}

void MainWindow::vertScrollBarChangedTeissier(int value)
{
  if (qAbs(ui->plotTeissier->yAxis->range().center()+value/100.0) > 0.01) // if user is dragging plot, we don't want to replot twice
  {
    ui->plotTeissier->yAxis->setRange(-value/100.0, ui->plotTeissier->yAxis->range().size(), Qt::AlignCenter);
    ui->plotTeissier->replot();
  }
}

void MainWindow::xAxisChangedTeissier(QCPRange range)
{
  ui->horizontalScrollBarTeissier->setValue(qRound(range.center()*100.0)); // adjust position of scroll bar slider
  ui->horizontalScrollBarTeissier->setPageStep(qRound(range.size()*100.0)); // adjust size of scroll bar slider
}

void MainWindow::yAxisChangedTeissier(QCPRange range)
{
  ui->verticalScrollBarTeissier->setValue(qRound(-range.center()*100.0)); // adjust position of scroll bar slider
  ui->verticalScrollBarTeissier->setPageStep(qRound(range.size()*100.0)); // adjust size of scroll bar slider
}

// exit app
void MainWindow::on_actionExit_triggered()
{
    qApp->exit();
}

//about
void MainWindow::on_actionAbout_triggered()
{
    QTextEdit* help = new QTextEdit();
    help->setReadOnly(true);
    help->append("<center><h1>About</h1></center>"
                 "<center><img src='UPB.gif'></center><br>"
                 "Bioprocess simulator for our OOP class, UPB, 2016 <br>"
                 "<br>"
                 "©DCMSS:<br>"
                 "Colbu Stefania<br>"
                 "Macovei Theodor<br>"
                 "Moraru Anthonius<br>"
                 "Stejar Nicolai<br>"
                 "Surdoiu Tudor<br>"
                 "<br>"
                 "Special thanks to our teacher, PhD Mihai CARAMIHAI");
    help->show();
}
