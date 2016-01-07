#include "modelolsson.h"

ModelOlsson::ModelOlsson()
{

}

QVector<double> ModelOlsson::getModel()
{
    QVector<double> x(500), y(500);


    for (int i = 0; i < 500; ++i)
    {
        y[i] = 2*i;
    }

    return y;
}
