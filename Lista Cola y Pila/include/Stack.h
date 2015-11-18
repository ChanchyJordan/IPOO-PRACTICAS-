#ifndef STACK_H
#define STACK_H
#include "Nodo.h"

class Stack
{
    public:
        void init_stack();
        void add_stack(int dato);
        void get_stack();
        void print();

        Stack();
        virtual ~Stack();


    private:
        Nodo* Base;
        Nodo* Cima;

};

#endif // STACK_H
