#include "Circulo.h"

Circulo::Circulo(){
    cout<<" Ingrese Codenada X del punto : ";
    cin>>circle.x;
    cout<<" Ingrese Codenada Y del punto : ";
    cin>>circle.y;
    cout<<" Ingrese el radio del Circulo : ";
    cin>>Radio;
    Area();
}

int Circulo::Area(){
    Resultado=Pi * (pow(Radio,2)) ;
    cout<<" El resultado es : "<<Resultado<<endl;
}
