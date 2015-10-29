#ifndef SEDAN_H
#define SEDAN_H
#include "Vehiculo.h"
#include "Vehiculo.h"
#include <iostream>

using namespace std;

class Sedan:public Vehiculo
{
    public:
        Sedan();
        int printData();

    private:
        string Comodidad;
        string Ligereza;


};

#endif // SEDAN_H
