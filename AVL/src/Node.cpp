#include "Node.h"

template<class Tipo>

Node<Tipo>::Node(Tipo dato)
{
    _dato=dato;
    _right=_left=NULL;
    _value_left=_value_right=0;
}

template<class Tipo>

Node<Tipo>::~Node()
{

}

template class Node<int>;
