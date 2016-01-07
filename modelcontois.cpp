#include "modelcontois.h"

ModelContois::ModelContois()
{

}

QVector<double> ModelContois::getModel()
{
    QVector<double> x(500), y(500);


    for (int i = 0; i < 500; ++i)
    {
        y[i] = -i;
    }

    return y;
}
