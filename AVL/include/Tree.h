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
        void _balance(Node<Tipo>* tmp);
        void _print_pre_orden();//Raiz Izquierda Derecha
        void _print_in_orden(); //Izquierda Raiz Derecha
        void _print_post_orden(); //Izquierda Derecha Raiz

        int get_number_of_elements(){return _number_of_elements;}


    private:
        Node<Tipo>* _origin;
        Node<Tipo>* _end;
        int _number_of_elements;
        Tipo _dato;

        short int recorrer(Node<Tipo>* tmp,int* dato); //ADD-BALANCE
        void recorrer(Node<Tipo>* tmp,char l); //PRE-ORDEN
        void recorrer(Node<Tipo>* tmp);//IN-ORDEN
        void recorrer(Node<Tipo>* tmp,bool v);//DESTRCUTOR
        //Node<Tipo>* recorrer(Node<Tipo>* tmp);
    //friend class Node
};

#endif // TREE_H
