#ifndef STACK_H
#define STACK_H

#include "Nodo.h"
#include "Queue.h"
#include "Lista.h"

template <class Tipo>

class Stack
{
    public:
        void init_stack();
        void add_stack(Tipo dato);
        void get_stack();
        void print();

        Stack();
        virtual ~Stack();


    private:
        Nodo<Tipo>* Base;
        Nodo<Tipo>* Cima;

};

#endif // STACK_H
