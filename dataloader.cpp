//The MIT License (MIT)

//Copyright (c) 2015 DACUS1995 (Surdoiu Tudor Marian)
//Copyright (c) 2015 Nicu Stejar
//Copyright (c) 2015 Colbu Stefania Cristiana
//Copyright (c) 2015 Anthonius Daoud-Moraru
//Copyright (c) 2015 Theodor Macovei

//Permission is hereby granted, free of charge, to any person obtaining a copy
//of this software and associated documentation files (the "Software"), to deal
//in the Software without restriction, including without limitation the rights
//to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//copies of the Software, and to permit persons to whom the Software is
//furnished to do so, subject to the following conditions:

//The above copyright notice and this permission notice shall be included in all
//copies or substantial portions of the Software.

//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//SOFTWARE.



#include "dataloader.h"

DataLoader::DataLoader()
{
    QFile fileInitial("date_initiale.csv");
    if (fileInitial.open(QIODevice::ReadOnly))
    {
        QString data;
        data = fileInitial.readAll();
        this->dataInitial = data.split(';');
        fileInitial.close();
    }
    QFile fileAverage("date_medie.csv");
    if (fileAverage.open(QIODevice::ReadOnly))
    {
        QString data;
        data = fileAverage.readAll();
        this->dataAverage = data.split(',');
        fileAverage.close();
    }
}

QStringList DataLoader::getDataAverage()
{
    return this->dataAverage;
}

QStringList DataLoader::getDataInitial()
{
    return this->dataInitial;
}

QVector<double> DataLoader::getTime()
{
    QVector<double> time(17);
    for (int index = 0; index < this->getDataAverage().size(); index++)
    {
        if ((index > 0) && (index <= 17))
        {
            QString value = this->getDataAverage().at(index);
            time[index - 1] = value.toDouble();
        }
    }

    return time;
}

QVector<double> DataLoader::getVelocity()
{
    QVector<double> velocity(17);
    for (int index = 0; index < this->getDataAverage().size(); index++)
    {
        if ((index != 0) && (index > 18))
        {
            QString value = this->getDataAverage().at(index);
            velocity[index - 19] = value.toDouble();
        }
    }

    return velocity;
}

double DataLoader::getVolum()
{
    return this->getDataInitial().at(0).toDouble();
}

double DataLoader::getDensitate()
{
    return this->getDataInitial().at(1).toDouble();
}

double DataLoader::getCantitate()
{
    return this->getDataInitial().at(2).toDouble();
}

double DataLoader::getTimp()
{
    return this->getDataInitial().at(3).toDouble();
}

double DataLoader::getOxigen()
{
    return this->getDataInitial().at(4).toDouble();
}
