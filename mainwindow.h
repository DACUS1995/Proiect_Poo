#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenuBar>
#include <QVector>
#include "qcustomplot.h"
#include "modelbley.h"
#include "modelcontois.h"
#include "modeldcmss.h"
#include "modelolsson.h"
#include "modelteissier.h"
#include "dataloader.h"


class QAction;
class QActionGroup;
class QLabel;
class QMenu;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setupPlotBley();
    void setupPlotContois();
    void setupPlotDcmss();
    void setupPlotOlsson();
    void setupPlotTeissier();

private:
    Ui::MainWindow *ui;
    DataLoader *dataLoader;
    QVector<double> time, velocity;
    double volum, densitate, cantitate, timp, oxigen;


private slots:
    void savePlotBley();
    void savePlotContois();
    void savePlotDcmss();
    void savePlotOlsson();
    void savePlotTeissier();
    void loadData();

    void horzScrollBarChangedBley(int value);
    void vertScrollBarChangedBley(int value);
    void xAxisChangedBley(QCPRange range);
    void yAxisChangedBley(QCPRange range);

    void horzScrollBarChangedContois(int value);
    void vertScrollBarChangedContois(int value);
    void xAxisChangedContois(QCPRange range);
    void yAxisChangedContois(QCPRange range);

    void horzScrollBarChangedDcmss(int value);
    void vertScrollBarChangedDcmss(int value);
    void xAxisChangedDcmss(QCPRange range);
    void yAxisChangedDcmss(QCPRange range);

    void horzScrollBarChangedOlsson(int value);
    void vertScrollBarChangedOlsson(int value);
    void xAxisChangedOlsson(QCPRange range);
    void yAxisChangedOlsson(QCPRange range);

    void horzScrollBarChangedTeissier(int value);
    void vertScrollBarChangedTeissier(int value);
    void xAxisChangedTeissier(QCPRange range);
    void yAxisChangedTeissier(QCPRange range);

    void on_actionExit_triggered();
    void on_actionAbout_triggered();
    void on_actionInitial_data_triggered();
    void on_actionAverage_data_triggered();
};

#endif // MAINWINDOW_H
