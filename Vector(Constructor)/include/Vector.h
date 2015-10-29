#ifndef VECTOR_H
#define VECTOR_H
#include "Point.h"

class Vector
{
    public:
        Vector();
        int Print();

    private:
        double num1,num2,num3,num4;
        Point _start;
        Point _end;

        int TamanoVect();
};

#endif // VECTOR_H
