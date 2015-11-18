#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"

class Lista
{
    public:
        Lista();
        ~Lista();

        int init_list();
        void add_list(int dato);
        int remove_list(int dato);
        void print();

    private:
        Nodo *Start;
        Nodo *End;

};

#endif // LISTA_H

