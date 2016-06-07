#ifndef ARDILLAVOLADORA_H
#define ARDILLAVOLADORA_H

#include "Roedores.h"

class ArdillaVoladora:public Roedores
{
    public:
        ArdillaVoladora();
        void movimiento();

    private:
        char* habitad;

};

#endif // ARDILLAVOLADORA_H
