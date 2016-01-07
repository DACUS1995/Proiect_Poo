#include "mainwindow.h"
#include <QApplication>
#include <qsplashscreen.h>
#include <qtimer.h>

int main(int argc, char *argv[])
{
    QApplication mainApp(argc, argv);
    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap("Splashscreen.png"));
    splash->show();

    MainWindow mainWindow;

    QTimer::singleShot(2500, splash, SLOT(close()));
    QTimer::singleShot(2500, &mainWindow, SLOT(show()));
    return mainApp.exec();
}
