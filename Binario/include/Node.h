#ifndef NODE_H
#define NODE_H
#include <iostream>

template<class Tipo>

class Node
{
    public:
        Node<Tipo>(Tipo dato);

        ~Node<Tipo>();

        Tipo _dato;
        //Node<Tipo>* _father;
        Node<Tipo>* _right; //Puntero Derecha
        Node<Tipo>* _left;  //Puntero Izquierda



};

#endif // NODE_H
