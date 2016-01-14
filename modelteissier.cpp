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


#include "modelteissier.h"

ModelTeissier::ModelTeissier()
{
    this->dataLoader = new DataLoader();

    this->volum = dataLoader->getVolum();
    this->densitate = dataLoader->getDensitate();
    this->cantitate = dataLoader->getCantitate();
    this->timp = dataLoader->getTimp();
    this->oxigen = dataLoader->getOxigen();
}

QVector<double> ModelTeissier::getModel()
{
    QVector<double> smic(timp + 1), Smare(timp + 1), u(timp + 1);
    double umax = 1.7, ks;
    ks = cantitate/volum;
    double w = 0.22015907459437;

    for (int t = 0; t <= timp; t++)
    {
        smic[t] = -0.0043 * pow(t, 4) + 0.1521 * pow(t, 3) - 1.6315 * pow(t, 2) + 2.8974 * t + cantitate;
        Smare[t] = (699.008133328824 - 280.584859261023*cos(smic[t]*w) - 959.032492506706*sin(smic[t]*w) - 1031.05114379521*cos(2*smic[t]*w) + 908.733241983027*sin(2*smic[t]*w) + 622.463110108855*cos(3*smic[t]*w) + 1096.44415229798*sin(3*smic[t]*w) + 677.036096578714*cos(4*smic[t]*w) - 318.876427395439*sin(4*smic[t]*w) - 39.328714156548*cos(5*smic[t]*w) - 301.374627323689*sin(5*smic[t]*w)) / volum;
        u[t] = umax * (1 - exp((-Smare[t])/(ks)));
    }
    return u;
}
