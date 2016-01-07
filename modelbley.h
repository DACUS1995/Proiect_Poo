#ifndef MODELBLEY_H
#define MODELBLEY_H

#include "model.h"

class ModelBley : public Model
{
public:
    ModelBley();
    QVector<double> getModel();
};

#endif // MODELBLEY_H
