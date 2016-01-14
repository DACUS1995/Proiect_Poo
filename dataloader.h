#ifndef DATALOADER_H
#define DATALOADER_H
#include <QFile>
#include <QStringList>
#include <QVector>

class DataLoader
{
public:
    DataLoader();
    QVector<double> getTime();
    QVector<double> getVelocity();
    double getVolum();
    double getDensitate();
    double getCantitate();
    double getTimp();
    double getOxigen();

private:
    QStringList getDataInitial();
    QStringList getDataAverage();
    QStringList dataInitial, dataAverage;

};

#endif // DATALOADER_H
