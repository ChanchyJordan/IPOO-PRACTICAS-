#ifndef TREE_H
#define TREE_H
#include "Node.h"

template<class Tipo>
class Tree
{
    public:
        Tree();
        Tree(Tipo dato);
        virtual ~Tree();

        void _initializer();
        void _add(Tipo dato);
        void _delete_element(Tipo dato);
        void _balance();
        void _print_pre_orden();//Raiz Izquierda Derecha
        void _print_in_orden(); //Izquierda Raiz Derecha
        void _print_post_orden(); //Izquierda Derecha Raiz

        int get_number_of_elements(){return _number_of_elements;}

        Node<Tipo>* _origin;
        Node<Tipo>* _end;
    private:
        int _number_of_elements;
        Tipo _dato;

        void recorrer(Node<Tipo>* tmp);
        void recorrer(Node<Tipo>* tmp,bool v);
        void recorrer(Node<Tipo>* tmp,char l);
        void recorrer(Node<Tipo>* tmp,int* n);

};

#endif // TREE_H
