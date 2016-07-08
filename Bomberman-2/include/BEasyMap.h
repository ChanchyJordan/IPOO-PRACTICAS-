#ifndef BEASYMAP_H
#define BEASYMAP_H

#include "BMap.h"
//#include "BGame.h"

class BEasyMap:public BMap{
    public:
        BEasyMap();
        void buildMap();  //MUROS INDESTRUCTIBLES
        void buildWallsMap();  //CONTRUYE MUROS DESTRUCTIBLES
        void putDemons();

};

#endif // BEASYMAP_H
