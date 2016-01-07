#ifndef MODELTEISSIER_H
#define MODELTEISSIER_H

#include "model.h"

class ModelTeissier : public Model
{
public:
    ModelTeissier();
    QVector<double> getModel();
};

#endif // MODELTEISSIER_H
