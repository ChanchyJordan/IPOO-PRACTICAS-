#ifndef BBOMB_H
#define BBOMB_H

#include <windows.h>
#include <iostream>

using namespace std;


class BBomb
{
    public:
        BBomb();

        bool placeBomb(int,int);
        bool placeBomb(int*);
        bool getState(){return state;}

    private:
        bool state;
        int positionBombX;
        int positionBombY;

};

#endif // BBOMB_H
