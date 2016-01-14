//The MIT License (MIT)

//Copyright (c) 2015 DACUS1995 (Surdoiu Tudor Marian)
//Copyright (c) 2015 Nicu Stejar
//Copyright (c) 2015 Colbu Stefania Cristiana
//Copyright (c) 2015 Anthonius Daoud-Moraru
//Copyright (c) 2015 Theodor Macovei

//Permission is hereby granted, free of charge, to any person obtaining a copy
//of this software and associated documentation files (the "Software"), to deal
//in the Software without restriction, including without limitation the rights
//to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//copies of the Software, and to permit persons to whom the Software is
//furnished to do so, subject to the following conditions:

//The above copyright notice and this permission notice shall be included in all
//copies or substantial portions of the Software.

//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//SOFTWARE.


#include <QApplication>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QObject>

#include "mainwindow.h"
#include "ui_mainwindow.h"


// constructor
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    //begin
    ui->setupUi(this);
    this->loadData();

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

    // animated background
    QMovie *movie = new QMovie(":/images/background.gif");
    ui->label_1->setMovie (movie);
    ui->label_2->setMovie (movie);
    ui->label_3->setMovie (movie);
    ui->label_4->setMovie (movie);
    ui->label_5->setMovie (movie);
    movie->start ();

    // bonus for correct scale
    ui->plotBley->yAxis->setScaleRatio(ui->plotBley->xAxis,5.0);
    ui->plotBley->yAxis->setRange(-2, 6);
    ui->plotBley->xAxis->setRange(0, 16);
    ui->plotContois->yAxis->setScaleRatio(ui->plotContois->xAxis,5.0);
    ui->plotContois->yAxis->setRange(-2, 6);
    ui->plotContois->xAxis->setRange(0, 16);
    ui->plotDcmss->yAxis->setScaleRatio(ui->plotDcmss->xAxis,5.0);
    ui->plotDcmss->yAxis->setRange(-2, 6);
    ui->plotDcmss->xAxis->setRange(0, 16);
    ui->plotOlsson->yAxis->setScaleRatio(ui->plotOlsson->xAxis,5.0);
    ui->plotOlsson->yAxis->setRange(-2, 6);
    ui->plotOlsson->xAxis->setRange(0, 16);
    ui->plotTeissier->yAxis->setScaleRatio(ui->plotTeissier->xAxis,5.0);
    ui->plotTeissier->yAxis->setRange(-2, 6);
    ui->plotTeissier->xAxis->setRange(0, 16);
}

// destructor
MainWindow::~MainWindow()
{
    delete ui;
}


// loading data from csvs
void MainWindow::loadData()
{
    this->dataLoader = new DataLoader();

    // initial data
    this->volum = dataLoader->getVolum();
    this->densitate = dataLoader->getDensitate();
    this->cantitate = dataLoader->getCantitate();
    this->timp = dataLoader->getTimp();
    this->oxigen = dataLoader->getOxigen();

    // average data
    this->time = dataLoader->getTime();
    this->velocity = dataLoader->getVelocity();
}

// methods for Bley
void MainWindow::savePlotBley()
{
    ui->plotBley->grab().save("Bley.png");
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

  QVector<double> x(timp + 1), y;
  ModelBley modelBley;
  for (int i = 0; i <= timp; i++)
  {
    x[i] = i;
  }
  y = modelBley.getModel();
  ui->plotBley->graph(0)->setData(x, y);
  ui->plotBley->graph(1)->setData(this->time, this->velocity);

  ui->plotBley->legend->setVisible(true);
  ui->plotBley->graph(0)->setName("Bley");
  ui->plotBley->graph(1)->setName("Experimental data");
  ui->plotBley->xAxis->setLabel("Time");
  ui->plotBley->yAxis->setLabel("Velocity");

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
    ui->plotContois->grab().save("Contois.png");
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

  QVector<double> x(timp + 1), y;
  ModelContois modelContois;
  for (int i = 0; i <= timp; i++)
  {
    x[i] = i;
  }
  y = modelContois.getModel();

  ui->plotContois->graph(0)->setData(x, y);
  ui->plotContois->graph(1)->setData(this->time, this->velocity);

  ui->plotContois->legend->setVisible(true);
  ui->plotContois->graph(0)->setName("Contois");
  ui->plotContois->graph(1)->setName("Experimental data");
  ui->plotContois->xAxis->setLabel("Time");
  ui->plotContois->yAxis->setLabel("Velocity");

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
    ui->plotDcmss->grab().save("dcmss.png");
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

  QVector<double> x(timp + 1), y;
  ModelDCMSS modelDCMSS;
  for (int i = 0; i <= timp; i++)
  {
    x[i] = i;
  }
  y = modelDCMSS.getModel();

  ui->plotDcmss->graph(0)->setData(x, y);
  ui->plotDcmss->graph(1)->setData(this->time, this->velocity);

  ui->plotDcmss->legend->setVisible(true);
  ui->plotDcmss->graph(0)->setName("Dcmss");
  ui->plotDcmss->graph(1)->setName("Experimental data");
  ui->plotDcmss->xAxis->setLabel("Time");
  ui->plotDcmss->yAxis->setLabel("Velocity");

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
    ui->plotOlsson->grab().save("olsson.png");
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

  QVector<double> x(timp + 1), y;
  ModelOlsson modelOlsson;
  for (int i = 0; i <= timp; i++)
  {
    x[i] = i;
  }
  y = modelOlsson.getModel();

  ui->plotOlsson->graph(0)->setData(x, y);
  ui->plotOlsson->graph(1)->setData(this->time, this->velocity);

  ui->plotOlsson->legend->setVisible(true);
  ui->plotOlsson->graph(0)->setName("Olsson");
  ui->plotOlsson->graph(1)->setName("Experimental data");
  ui->plotOlsson->xAxis->setLabel("Time");
  ui->plotOlsson->yAxis->setLabel("Velocity");

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
    ui->plotTeissier->grab().save("teissier.png");
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

  QVector<double> x(timp + 1), y;
  ModelTeissier modelTeissier;
  for (int i = 0; i <= timp; i++)
  {
    x[i] = i;
  }
  y = modelTeissier.getModel();

  ui->plotTeissier->graph(0)->setData(x, y);
  ui->plotTeissier->graph(1)->setData(this->time, this->velocity);

  ui->plotTeissier->legend->setVisible(true);
  ui->plotTeissier->graph(0)->setName("Teissier");
  ui->plotTeissier->graph(1)->setName("Experimental data");
  ui->plotTeissier->xAxis->setLabel("Time");
  ui->plotTeissier->yAxis->setLabel("Velocity");

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

// menu->exit
void MainWindow::on_actionExit_triggered()
{
    qApp->exit();
}

// menu->about
void MainWindow::on_actionAbout_triggered()
{
    QTextEdit* help = new QTextEdit();
    help->setReadOnly(true);
    help->append("<center><h1>About</h1></center>"
                 "<center><img src=':/images/UPB.gif'></center><br>"
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
    help->setMinimumHeight(350);
    help->setMinimumWidth(350);
    help->show();
}


// menu->view initial data
void MainWindow::on_actionInitial_data_triggered()
{
    QTableView *viewInitialData = new QTableView;

    QStandardItemModel *model = new QStandardItemModel;
    QStandardItem *volum = new QStandardItem("Volum");
    QStandardItem *densitate = new QStandardItem("Densitate");
    QStandardItem *cantitate = new QStandardItem("Cantitate");
    QStandardItem *timp = new QStandardItem("Timp");
    QStandardItem *oxigen = new QStandardItem("Oxigen");
    model->setHorizontalHeaderItem(0, volum);
    model->setHorizontalHeaderItem(1, densitate);
    model->setHorizontalHeaderItem(2, cantitate);
    model->setHorizontalHeaderItem(3, timp);
    model->setHorizontalHeaderItem(4, oxigen);

    QStandardItem *itemVolum = new QStandardItem(QString::number(this->volum));
    model->setItem(0, 0, itemVolum);
    QStandardItem *itemDensitate = new QStandardItem(QString::number(this->densitate));
    model->setItem(0, 1, itemDensitate);
    QStandardItem *itemCantitate = new QStandardItem(QString::number(this->cantitate));
    model->setItem(0, 2, itemCantitate);
    QStandardItem *itemTimp = new QStandardItem(QString::number(this->timp));
    model->setItem(0, 3, itemTimp);
    QStandardItem *itemOxigen = new QStandardItem(QString::number(this->oxigen));
    model->setItem(0, 4, itemOxigen);

    viewInitialData->setModel(model);
    viewInitialData->setWindowTitle("Date initiale");
    viewInitialData->verticalHeader()->hide();
    viewInitialData->resize(500,100);
    viewInitialData->show();
}

// menu->view experimental data
void MainWindow::on_actionAverage_data_triggered()
{
    QTableView *viewAverageData = new QTableView;
    QStandardItemModel *model = new QStandardItemModel;
    QStandardItem *timp = new QStandardItem("Timp");
    QStandardItem *viteza = new QStandardItem("Viteza");

    model->setVerticalHeaderItem(0, timp);
    model->setVerticalHeaderItem(1, viteza);
    for (int index = 0; index < 17; index++)
    {
        QString valueTime = QString::number(this->time.at(index));
        QStandardItem *itemTime = new QStandardItem(valueTime);
        model->setItem(0, index, itemTime);
        QString valueVelocity = QString::number(this->velocity.at(index));
        QStandardItem *itemVelocity = new QStandardItem(valueVelocity);
        model->setItem(1, index, itemVelocity);
    }
    viewAverageData->setModel(model);
    viewAverageData->setWindowTitle("Date experimentale");
    viewAverageData->horizontalHeader()->hide();
    viewAverageData->resize(500,100);
    viewAverageData->show();
}
