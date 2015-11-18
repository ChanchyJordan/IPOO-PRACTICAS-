#ifndef QUEUE_H
#define QUEUE_H
#include "Nodo.h"


class Queue
{
    public:
        void init_queue();
        void add_queue(int dato);
        void get_queue();
        void print();

        Queue();
        virtual ~Queue();


    private:
        Nodo* Base;
        Nodo* Cima;
};

#endif // QUEUE_H
