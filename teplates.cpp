#include <iostream>

using namespace std;

template<class Hola>

Hola sumar(Hola a,Hola b){
    return a+b;
}

int main(){
    float a,b,c;
    a=2323.1;
    b=123123.345356;
    c=sumar(a,b);
    cout<<c<<endl;
    return 0;
}

