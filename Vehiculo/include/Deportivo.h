#ifndef DEPORTIVO_H
#define DEPORTIVO_H
#include "Vehiculo.h"
#include <iostream>

using namespace std;

class Deportivo:public Vehiculo
{
    public:
        Deportivo();
        int printData();

    private:
        string Belleza;
        float Altura;

};

#endif // DEPORTIVO_H
