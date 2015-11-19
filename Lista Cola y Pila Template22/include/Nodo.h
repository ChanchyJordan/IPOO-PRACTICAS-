#ifndef NODO_H
#define NODO_H
#include <iostream>

template <class Tipo>

class Nodo
{
    public:
        Tipo dato;
        Nodo* sig;
        Nodo* ant;
        Nodo(Tipo dato);

};

#endif // NODO_H
