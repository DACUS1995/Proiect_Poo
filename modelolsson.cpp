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


#include "modelolsson.h"

ModelOlsson::ModelOlsson()
{
    this->dataLoader = new DataLoader();

    this->volum = dataLoader->getVolum();
    this->densitate = dataLoader->getDensitate();
    this->cantitate = dataLoader->getCantitate();
    this->timp = dataLoader->getTimp();
    this->oxigen = dataLoader->getOxigen();
}

QVector<double> ModelOlsson::getModel()
{
    QVector<double> u(timp + 1), s(timp + 1), c(timp + 1);
    double umax = 1.7, ks, kc;
    ks = cantitate/volum;
    kc = oxigen;

    for (int t = 0; t <= timp; t++)
    {
        s[t] = 0.0024 * pow(t, 2) - 0.0818 * t + cantitate/volum;
        c[t] = -16778479445.1729 - 578171362.961307*t + 19619024151.8506*s[t] + 1498594023.09346*t*s[t] - 1972792480.461*pow(s[t],2) - 1340251550.36054*t*pow(s[t],2) - 5763344047.45968*pow(s[t],3) + 506613394.47597*t*pow(s[t],3) + 2674051981.01793*pow(s[t],4) - 69425667.9647913*t*pow(s[t],4) - 351369238.611415*pow(s[t],5);
        u[t] = umax * (s[t] / (ks + s[t])) * (c[t] / (kc + c[t]));
    }
    return u;
}
