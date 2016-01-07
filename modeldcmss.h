#ifndef MODELDCMSS_H
#define MODELDCMSS_H

#include "model.h"

class ModelDCMSS: public Model
{
public:
    ModelDCMSS();
    QVector<double> getModel();
};

#endif // MODELDCMSS_H
