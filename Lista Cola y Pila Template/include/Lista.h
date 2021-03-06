#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"
#include "Queue.h"
#include "Stack.h"

template<class Tipo>

class Lista
{
    public:
        Lista();
        //Lista(int hhh);
        ~Lista();

        int init_list();
        void add_list(Tipo dato);
        int remove_list(Tipo dato);
        void print();

        Lista operator +(Lista Enlazada);
        //Queue* hola;
        //Lista operator +(Queue<Tipo> Cola);

    private:
        Nodo<Tipo> *Start;
        Nodo<Tipo> *End;

};

#endif // LISTA_H

