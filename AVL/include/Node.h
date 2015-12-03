#ifndef NODE_H
#define NODE_H
#include <iostream>


template<class Tipo>

class Node
{
    public:
        Node<Tipo>(Tipo dato);

        ~Node<Tipo>();
        short int _value_right;
        short int _value_left;
        Tipo _dato;
        Node<Tipo>* _father;
        Node<Tipo>* _right; //Puntero Derecha
        Node<Tipo>* _left;  //Puntero Izquierda



        //friend class Tree;


};

#endif // NODE_H
