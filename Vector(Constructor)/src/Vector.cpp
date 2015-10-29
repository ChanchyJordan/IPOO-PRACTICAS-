#include "Vector.h"
#include <iostream>
#include <math.h>

using namespace std;

Vector::Vector()
{
    cout<<"Ingrese los valores : "<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cin>>num4;
    _start.setPoint(num1,num2);
    _end.setPoint(num3,num4);
    Print();
}

int Vector::Print(){
    cout<<endl;
    cout<<"Punto start x: "<< _start.get_x()<<endl;
    cout<<"Punto start y: "<< _start.get_y()<<endl;
    cout<<"Punto End x : "<< _end.get_x()<<endl;
    cout<<"Punto End y : "<< _end.get_y()<<endl;

    return 0;
}
/*
int Vector::TamanoVect(){
    cout<<endl<<" Distacia entre los dos puntos es : "
    <<sqrt(pow((_start.get-_End.x),2)+pow((_Start.y-_End.y),2))<<endl;
    return 0;
}*/


