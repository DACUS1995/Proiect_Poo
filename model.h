#ifndef MODEL_H
#define MODEL_H

#include <QDebug>
#include <QVector>
#include <qmath.h>
#include "dataloader.h"

class Model
{
public:
    virtual QVector<double> getModel();

protected:
    DataLoader *dataLoader;
    double volum, densitate, cantitate, timp, oxigen;
};

#endif // MODEL_H
