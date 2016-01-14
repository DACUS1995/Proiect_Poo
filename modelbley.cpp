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


#include "modelbley.h"

ModelBley::ModelBley()
{
    this->dataLoader = new DataLoader();

    this->volum = dataLoader->getVolum();
    this->densitate = dataLoader->getDensitate();
    this->cantitate = dataLoader->getCantitate();
    this->timp = dataLoader->getTimp();
    this->oxigen = dataLoader->getOxigen();
}

QVector<double> ModelBley::getModel()
{
    QVector<double> y(timp + 1), S(timp+1), x1(timp+1), miu_1(timp+1), miu_2(timp+1);
    double umax = 1.7;
    bool ok = 0;


    for (int t = 0; t <= timp; t++)
    {
        S[t] = 0.0024 * pow(t,2) - 0.0818 * t + cantitate/volum;
        x1[t] = -8.4699 * 0.0001  *pow(t,2) + 0.0282*t + densitate/volum;
        miu_1[t]= -105333.817312055 + 373751.80220063 * x1[t] + 35558.8061493577 * S[t] - 262759.067817494 * pow(x1[t], 2) - 91359.0042299898 * x1[t] * S[t];
        miu_2[t]= -2277.14502642151 + 9840.70774150655 * x1[t] + 774.620485046419 * S[t] - 7226.17688550356 * pow(x1[t], 2) - 2614.29991290225 * x1[t] * S[t];

        if(ok == 0)
            y[t] = miu_1[t];
        else
            y[t] = miu_2[t];

        if((miu_1[t] >= umax - 0.3) && (miu_1[t] <= umax + 0.3))
            ok = 1;
    }

    return y;
}
