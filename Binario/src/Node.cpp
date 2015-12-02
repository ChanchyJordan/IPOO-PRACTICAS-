#include "Node.h"

template<class Tipo>

Node<Tipo>::Node(Tipo dato)
{
    _dato=dato;
    _father=_right=_left=NULL;
    //std::cout<<dato<<std::endl;
}

template<class Tipo>

Node<Tipo>::~Node()
{

}

template class Node<int>;
