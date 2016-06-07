#ifndef RATON_H
#define RATON_H

#include "Raton.h"
#include "ArdillaVoladora.h"
#include "Jerbo.h"

class Raton :public Roedores
{
    public:
        Raton();
        void alimentarse();

        char* getCaracteristica(){return caracteristica;}
    private:
        char* caracteristica;

};

#endif // RATON_H
