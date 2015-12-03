#include "Tree.h"

template <class Tipo>

Tree<Tipo>::Tree()
{
    _origin=NULL;
    _number_of_elements=0;
    _initializer();
}

template <class Tipo>

Tree<Tipo>::Tree(Tipo dato)
{
    _origin=new Node<Tipo>(dato);
    _number_of_elements++;
    _initializer();
}

template <class Tipo>

Tree<Tipo>::~Tree()
{
    Node<Tipo>* tmp=_origin;
    bool validate;
    recorrer(tmp,validate);
    delete _origin;
}

template <class Tipo>

void Tree<Tipo>::_initializer(){
    unsigned short int alternativa;
    bool validar=1;
    Tipo dato;
    std::cout<<" ---------- A R B O L   B I N A R I O ---------"<<std::endl<<std::endl;
    if (_origin==NULL){
        std::cout<<" Agregue el Nodo Raiz : ";
        std::cin>>dato;
        _add(dato);
    }

    while(validar){
        std::cout<<std::endl<<" Presione : (1)Agregar  (2)Eliminar  (3)Imprimir (4)Numero de elementos (5)SALIR   ";
        std::cin>>alternativa;
        switch (alternativa){
            case 1:
                std::cout<<" Ingrese el numero : ";
                std::cin>>dato;
                std::cout<<std::endl;
                _add(dato);
                /*_add(5);
                _add(15);
                _add(2);
                _add(7);
                _add(12);
                _add(18);
                _add(3);
                _add(6);
                _add(11);
                _add(14);
                _add(17);*/
                break;
            case 2:
                std::cout<<" Ingrese el numero : ";
                std::cin>>dato;
                _delete_element(dato);
                break;
            case 3:
                unsigned short int num;
                std::cout<<" (1) Pre-Orden "<<std::endl
                <<" (2) In-Orden "<<std::endl
                <<" (3) Post-Orden "<<std::endl;
                std::cin>>num;
                switch(num){
                    case 1:
                        _print_pre_orden();
                        break;
                    case 2:
                        _print_in_orden();
                        break;
                    case 3:
                        _print_post_orden();
                        break;
                    default:
                        std::cout<<" FATAL ERROR! El numero ue usted ingreso no es correcto  "<<std::endl;
                }

                break;
            case 4:
                std::cout<<" El numero de elementos es : "<<get_number_of_elements()<<std::endl;

            case 5:
                validar=false;
                break;
            default:
                std::cout<<" FATAL ERROR! El numero ue usted ingreso no es correcto  "<<std::endl;
                break;
        }
    }
}

template <class Tipo>

void Tree<Tipo>::_add(Tipo dato)
{
    if (!_origin)
    {
        _origin=new Node<Tipo>(dato);
        _end=_origin;
        _number_of_elements=1;
    }
    else
    {
        Node<Tipo>* tmp=_origin;
        int *n;
        recorrer(tmp,&dato);
    }
}

template <class Tipo>

void Tree<Tipo>::_delete_element(Tipo dato)
{
    Node<Tipo>* tmp=_origin;
    bool validate=1;
    int* n;
    while(validate)
    {
        if (tmp->_dato==dato){
            recorrer(tmp,n);
            validate=0;
            _number_of_elements--;
        }
        else {
            if (tmp->_dato > dato)
                tmp=tmp->_left;
            else if(tmp->_dato < dato)
                tmp=tmp->_right;
        }


    }
}
template <class Tipo>

void Tree<Tipo>::_print_pre_orden() // RAIZ - IZQUIERDA - DERECHA
{
    char l;
    if(_origin!=NULL){
        Node<Tipo>* tmp=_origin;
        std::cout<<" ARBOL EN PRE-ORDEN "<<std::endl;
        recorrer(tmp,l);
        std::cout<<std::endl<<std::endl;
    }
    else
        std::cout<<" EL ARBOL ESTA VACIO "<<std::endl;
}

template <class Tipo>

void Tree<Tipo>::_print_in_orden() //IZQUIERDA - RAIZ - DERECHA
{
    if(_origin!=NULL){
        Node<Tipo>* tmp=_origin;
        std::cout<<" ARBOL EN IN-ORDEN "<<std::endl;
        recorrer(tmp);
        std::cout<<std::endl<<std::endl;
    }
    else
        std::cout<<" EL ARBOL ESTA VACIO "<<std::endl;
}

template <class Tipo>

void Tree<Tipo>::_print_post_orden() //IZQUIERDA - DERECHA - RAIZ
{
    std::cout<<" NO DISPONIBLE :c "<<std::endl;
}

template <class Tipo>

void Tree<Tipo>::_balance(Node<Tipo>* tmp)
{
    if(1>=tmp->_value_left-tmp->_value_right>=-1){
        Node<Tipo>* tmp2;
        if(tmp->_value_left>tmp->_value_right){
            tmp2=tmp->right;
            tmp->left=tmp->right->right;
            tmp->left->left=tmp2;
        }
        else{
            tmp2=tmp->_right;
            tmp->right=tmp->right->left;
            tmp->right=tmp2;

        }
    }

}

//---------------- F U N C I O N E S   A U X I L I A R E S -------

template <class Tipo>

short int Tree<Tipo>::recorrer(Node<Tipo>* tmp,int* dato){ //ADD
    if (tmp->_dato > *dato)
    {
        if (tmp->_left==NULL)
        {
            tmp->_left=new Node<Tipo>(*dato);
            _number_of_elements++;
        }
        else
            tmp->_value_left=recorrer(tmp->_left,dato); //$$$$$
            tmp->_value_left++;
            balance(tmp);
            if(tmp->_value_left > tmp->_value_right){
                return tmp->_value_left;
            }
            else
                return tmp->_value_right;
    }
    else
    {
        if(tmp->_right==NULL)
        {
            tmp->_right=new Node<Tipo>(*dato);
            _number_of_elements++;
        }
        else
            tmp->_value_right=recorrer(tmp->_right,dato); //******
            tmp->_value_right++;
            balance(tmp);
            if(tmp->_value_left > tmp->_value_right)
                return tmp->_value_left;
            else
                return tmp->_value_right;
    }

}
template <class Tipo>

void Tree<Tipo>::recorrer(Node<Tipo>* tmp,char l){ //  PRE ORDEN
    if(tmp->_left!=NULL){
        std::cout<<tmp->_dato<<"  "<<"left "<<tmp->_value_left<<" right "<<tmp->_value_right<<std::endl; // $$
        recorrer(tmp->_left,l);  // ¿?
    }
    if(tmp->_right!=NULL){
        if(tmp->_left==NULL)
            std::cout<<tmp->_dato<<"  "<<"left "<<tmp->_value_left<<" right "<<tmp->_value_right<<std::endl; //~
        recorrer(tmp->_right,l);  // **
    }
    else if (tmp->_right==NULL and tmp->_left==NULL)
        std::cout<<tmp->_dato<<"  "<<"left "<<tmp->_value_left<<" right "<<tmp->_value_right<<std::endl; // ||
}
template <class Tipo>

void Tree<Tipo>::recorrer(Node<Tipo>* tmp){ //  IN ORDEN
    if (tmp->_left!=NULL){
        recorrer(tmp->_left);
        std::cout<<tmp->_dato<<"  ";
    }
    if(tmp->_right!=NULL){
        if(tmp->_left==NULL)
            std::cout<<tmp->_dato<<"  ";
        recorrer(tmp->_right);
    }
    else if(tmp->_right==NULL and tmp->_left==NULL)
        std::cout<<tmp->_dato<<"  ";
}

template <class Tipo>

void Tree<Tipo>::recorrer(Node<Tipo>* tmp,bool v){ //  DESTRUCTOR
    if (tmp->_left!=NULL){
        recorrer(tmp->_left,v);
        delete tmp->_left;
    }

    if (tmp->_right!=NULL){
        recorrer(tmp->_right,v);
        delete tmp->_right;
    }
}





template class Tree<int>;

