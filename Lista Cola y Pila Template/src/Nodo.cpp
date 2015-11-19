#include "Nodo.h"

template <class Tipo>

Nodo<Tipo>::Nodo(Tipo dato)
{
    this->dato=dato;
    sig=ant=NULL;
}
