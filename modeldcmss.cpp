#include "modeldcmss.h"

ModelDCMSS::ModelDCMSS()
{

}

QVector<double> ModelDCMSS::getModel()
{
    QVector<double> x(500), y(500);
    double alpha = 2.50595298849786;
    double gama = 7;

    for (int i = 0; i < 500; ++i)
    {
        x[i] = i;
        if(x[i] <= gama)
            y[i] = 1/alpha * log(2) * pow(2,x[i]/alpha);
        else
            y[i] = y[i-1] - 1/alpha * log(2) *  pow(2,(13 - x[i])/(2 * alpha));
        if(y[i] < 0)
            y[i] = 0;
    }

    return y;
}
