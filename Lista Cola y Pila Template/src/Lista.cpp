#include "Lista.h"

using namespace std;

template <class Tipo>

Lista<Tipo>::Lista(){
    Start=End=NULL;
    init_list();
}
/*
template <class Tipo>

Lista<Tipo>::Lista(int hhh){
    Start=End=NULL;
    init_list();
}*/

template <class Tipo>

Lista<Tipo>::~Lista(){
    Nodo<Tipo>* tmp=Start->sig;
    while (tmp!=NULL){
        delete tmp->ant;
        tmp=tmp->sig;
    }
    delete End;
    print();
}

template <class Tipo>

int Lista<Tipo>::init_list(){
    Tipo dato;
    unsigned short int alternativa;
    bool validar;
    cout<<" --------- LISTA ENLAZADA ---------"<<endl<<endl
    <<" Agregue el Nodo Raiz : ";
    cin>>dato;
    add_list(dato);

    while(validar){
        cout<<endl<<" Presione : (1)Agregar  (2)Eliminar  (3)Imprimir (4)SALIR   ";
        cin>>alternativa;
        switch (alternativa){
            case 1:
                cout<<" Ingrese el numero : ";
                cin>>dato;
                add_list(dato);
                /*
                add_list(2);
                add_list(3);
                add_list(4);
                add_list(5);
                add_list(6);
                add_list(7);
                add_list(8);*/
                print();
                break;
            case 2:
                cout<<" Ingrese el numero : ";
                cin>>dato;
                remove_list(dato);
                break;
            case 3:
                print();
                break;
            case 4:
                validar=false;
                break;
            default:
                cout<<" FATAL ERROR! El numero ue usted ingreso no es correcto  "<<endl;
                break;
        }
    }
    return 0;
}

template <class Tipo>

void Lista<Tipo>::add_list(Tipo dato) {
    if(!Start){
        Start=new Nodo<Tipo>(dato);
        End=Start;
    }
    else{
        Nodo<Tipo>* ptr=End;
        End->sig=new Nodo<Tipo>(dato);
        End=End->sig;
        End->ant=ptr;
    }

}

template <class Tipo>

int Lista<Tipo>::remove_list(Tipo dato){
    if(Start==End){
        if(Start->dato==dato){
            delete Start;
            cout<<endl<<" La lista esta Vacia "<<endl<<endl;
        }
        else{
            cout<<" El numero que usted ingreso no existe en la Lista "<<endl;
            print();
        }
    }
    else{
        if (Start->dato==dato){
            Start=Start->sig;
            delete Start->ant;
            Start->ant=NULL;
            print();
        }
        else{
            if(End->dato==dato){
                End=End->ant;
                delete End->sig;
                End->sig=NULL;
                print();
            }
            else {
                Nodo<Tipo>* tmp=Start->sig;
                while(tmp!=End){
                    if(tmp->dato==dato){
                        tmp->ant->sig=tmp->sig;
                        delete tmp->sig->ant;
                        tmp->sig->ant=tmp->ant;
                        print();
                        return 0;
                    }
                    else
                        tmp=tmp->sig;
                }
                cout<<" El numero que usted ingreso no existe en la Lista "<<endl;
                print();
            }
        }
    }
    return 0;
}

template <class Tipo>

void Lista<Tipo>::print(){
    cout<<endl;
    Nodo<Tipo> *tmp=Start;
    while(tmp!=End){
        cout<<"  "<<tmp->dato;
        tmp=tmp->sig;
    }
    cout<<"  "<<End->dato<<endl<<endl;

}
/*
Lista Lista::operator+(Lista Enlazada){



}*/




