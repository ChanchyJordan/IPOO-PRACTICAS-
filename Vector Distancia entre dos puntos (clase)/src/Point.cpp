#include "Point.h"
#include <iostream>

using namespace std;

Point::Point()
{
    cout<<" Ingrese la coordenada X : ";
    cin>>x;
    cout<<" Ingrese la coordenada Y : ";
    cin>>y;
}

void Point::printPoint(){
    cout<<" La coordenada X es : "<<x<<endl;
    cout<<" La coordenada Y es : "<<y<<endl;
    //return 0;
}

