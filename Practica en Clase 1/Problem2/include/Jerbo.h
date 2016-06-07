#ifndef JERBO_H
#define JERBO_H

#include "Roedores.h"

class Jerbo:Roedores
{
    public:
        Jerbo();
        void movimiento();

    private:
         char* caracteristica;
};

#endif // JERBO_H
