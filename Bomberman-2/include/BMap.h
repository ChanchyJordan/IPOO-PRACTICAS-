#ifndef BMAP_H
#define BMAP_H

#include <vector>
#include <iostream>

#include "BGame.h"

using namespace std;

class BMap
{
    public:
        BMap():matrix(22,vector<char> (22,' ')){};

        int initMap();
        void buildMapEdge();  //CONTRUYE LOS BORDES
        virtual void printMap();  //IMPRIMIR

        virtual void buildMap()=0;  //CONSTRUYE MUROS INDESTRUCTIBLES
        virtual void buildWallsMap()=0;  //CONTRUYE MUROS DESTRUCTIBLES
        //void movement();  //FUNCION PARA EL MOVIMIENTO

        friend class BGame;


    protected:
        vector < vector<char> > matrix ;

        //friend class Game;

};
#endif // BMAP_H
