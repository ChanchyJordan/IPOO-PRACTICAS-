#ifndef NODO_H
#define NODO_H
#include <iostream>


class Nodo
{
    public:
        int dato;
        Nodo* sig;
        Nodo* ant;
        Nodo(int dato);

};

#endif // NODO_H
