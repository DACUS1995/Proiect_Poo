#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenuBar>
#include "qcustomplot.h"

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

    void setupPlot();

private:
    Ui::MainWindow *ui;


private slots:
    void change_text();
    void makePlot();
    void savePlot();
    void horzScrollBarChanged(int value);
    void vertScrollBarChanged(int value);
    void xAxisChanged(QCPRange range);
    void yAxisChanged(QCPRange range);

};

#endif // MAINWINDOW_H
