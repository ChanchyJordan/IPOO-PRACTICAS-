#ifndef VECTOR_H
#define VECTOR_H
#include "Point.h"

class Vector
{
    public:
        int Resultado;
        Point Start,End;

        Vector();
        int TamanoVect();
        int Print();
};

#endif // VECTOR_H
