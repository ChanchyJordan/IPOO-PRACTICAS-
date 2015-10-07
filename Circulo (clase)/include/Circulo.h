#ifndef CIRCULO_H
#define CIRCULO_H
#include <iostream>
#include <math.h>
#include "Point.h"

using namespace std;

class Circulo
{
    public:
        float Pi=3.14;
        float Resultado;
        int Radio;
        Point circle;

        Circulo();
        int Area();
};

#endif // CIRCULO_H
