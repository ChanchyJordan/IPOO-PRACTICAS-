#ifndef CAMIONETA_H
#define CAMIONETA_H
#include "Vehiculo.h"
#include <iostream>

using namespace std;

class Camioneta:public Vehiculo
{
    public:
        Camioneta();
        int printData();


    private:
        int Traction;
        string Turbo;
};

#endif // CAMIONETA_H
