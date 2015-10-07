#include "Vector.h"
#include <iostream>
#include <math.h>

using namespace std;

Vector::Vector()
{
    Print();
    TamanoVect();
}

int Vector::Print(){
    cout<<endl;
    Start.printPoint();
    End.printPoint();

    return 0;
}

int Vector::TamanoVect(){
    cout<<endl<<" Distacia entre los dos puntos es : "
    <<sqrt(pow((Start.x-End.x),2)+pow((Start.y-End.y),2))<<endl;
    return 0;
}


