#ifndef BMAP_H
#define BMAP_H

#include <vector>
#include <iostream>

#include "BGame.h"

using namespace std;

class BMap
{
    public:
        BMap():matrix(20,vector<char> (20,' ')){}
        ;

        int initMap();
        virtual void printMap();
        void buildMapEdge();

        virtual void buildMap()=0;
        virtual void buildWallsMap()=0;
        void movement();

    protected:
        vector < vector<char> > matrix ;

        friend class Game;

};
#endif // BMAP_H
