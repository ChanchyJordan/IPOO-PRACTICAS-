#include "Vect.h"
#include <math.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

Vect::Vect()
{
    for(short int i=0;i<SIZE;i++){
        for(short int j=0;j<SIZE;j++){
            matriz[i][j]=rand()%3;
        }
    }
    cout<<" - MATRIZ -"<<endl<<endl;
    print();
}

Vect::Vect(Vect matriz1,Vect matriz2){
    int suma=0;
    for(short int i=0;i<SIZE;i++){
        for(short int k=0;k<SIZE;k++){
            for(short int j=0;j<SIZE;j++){
                suma=suma+matriz1.matriz[i][j]*matriz2.matriz[j][k];
            }
            matriz[i][k]=suma;
            suma=0;
        }
    }
    cout<<" - MATRIZ RESULTANTE - "<<endl<<endl;
    print();
}
int Vect::print(){
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            cout<<" "<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}



