#ifndef QUEUE_H
#define QUEUE_H

#include "Nodo.h"
#include "Lista.h"
#include "Stack.h"

template <class Tipo>

class Queue
{
    public:

        void init_queue();
        void add_queue(Tipo dato);
        void get_queue();
        void print();

        Queue();
        virtual ~Queue();
        Queue operator+(Queue Cola);
        Queue operator-(Queue Cola);

    private:
        Nodo<Tipo>* Base;
        Nodo<Tipo>* Cima;
};

#endif // QUEUE_H
