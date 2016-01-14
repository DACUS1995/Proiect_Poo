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


#include "modelcontois.h"

ModelContois::ModelContois()
{
    this->dataLoader = new DataLoader();

    this->volum = dataLoader->getVolum();
    this->densitate = dataLoader->getDensitate();
    this->cantitate = dataLoader->getCantitate();
    this->timp = dataLoader->getTimp();
    this->oxigen = dataLoader->getOxigen();
}

QVector<double> ModelContois::getModel()
{
    QVector<double> s(timp + 1), x(timp + 1), k(timp + 1), u(timp + 1);
    double umax = 1.7;

    for (int t = 0; t <= timp; t++)
    {
        s[t] = 0.0024 * pow(t, 2) - 0.0818 * t + cantitate/volum;
        x[t] = -8.4699 * 0.0001 * pow(t, 2) + 0.0282 * t + densitate/volum;
        k[t] = 0.00505325 * pow(t, 6) - 0.23513392 * pow(t, 5) + 4.18549992 * pow(t, 4) - 36.21219187 * pow(t, 3) +
                164.18424064 * pow(t, 2) - 401.04209249 * t + 491.08172133;
        u[t] = umax * (s[t] / (k[t] * x[t] + s[t]));
    }

    return u;
}
