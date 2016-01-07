#ifndef MODELOLSSON_H
#define MODELOLSSON_H

#include "model.h"

class ModelOlsson : public Model
{
public:
    ModelOlsson();
    QVector<double> getModel();
};

#endif // MODELOLSSON_H
