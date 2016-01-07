#ifndef MODEL_H
#define MODEL_H

#include <QVector>
#include <qmath.h>

class Model
{
public:
    virtual QVector<double> getModel();

protected:
    QVector<double> model;
};

#endif // MODEL_H
