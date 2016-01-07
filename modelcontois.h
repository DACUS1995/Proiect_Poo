#ifndef MODELCONTOIS_H
#define MODELCONTOIS_H

#include "model.h"

class ModelContois : public Model
{
public:
    ModelContois();
    QVector<double> getModel();
};

#endif // MODELCONTOIS_H
