#ifndef BEASYMAP_H
#define BEASYMAP_H

#include "BMap.h"

class BEasyMap:public BMap{
    public:
        BEasyMap();
        void buildMap();
        void buildWallsMap();

};

#endif // BEASYMAP_H
