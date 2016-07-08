#ifndef BMAP_H
#define BMAP_H

#include <vector>
#include <iostream>

#include "BGame.h"
#include "BDemon.h"

using namespace std;

class BMap
{
    public:
        BMap():matrix(22,vector<char> (22,' ')){};

        int initMap();
        void buildMapEdge();  //CONTRUYE LOS BORDES
        virtual void printMap();  //IMPRIMIR
        unsigned getTamList(){return listDemon.size();}

        virtual void buildMap()=0;  //CONSTRUYE MUROS INDESTRUCTIBLES
        virtual void buildWallsMap()=0;  //CONTRUYE MUROS DESTRUCTIBLES
        virtual void putDemons()=0;
        void eliminateDemon(int,int);


        friend class BGame;


    protected:
        vector < vector<char> > matrix ;
        vector <BDemon> listDemon;

        //friend class Game;

};
#endif // BMAP_H
