#include "modelteissier.h"

ModelTeissier::ModelTeissier()
{

}

QVector<double> ModelTeissier::getModel()
{
    QVector<double> x(500), y(500);


    for (int i = 0; i < 500; ++i)
    {
        y[i] = i;
    }

    return y;
}
