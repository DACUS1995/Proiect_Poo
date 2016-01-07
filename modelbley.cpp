#include "modelbley.h"

ModelBley::ModelBley()
{

}

QVector<double> ModelBley::getModel()
{
    QVector<double> x(500), y(500);


    for (int i = 0; i < 500; ++i)
    {
        y[i] = 3 * i;
    }

    return y;
}
