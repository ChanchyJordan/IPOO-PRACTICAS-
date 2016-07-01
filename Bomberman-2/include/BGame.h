#ifndef BGAME_H
#define BGAME_H

#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

#include "BMap.h"
#include "BMan.h"
#include "BBomb.h"

#define KEY_UP 72 + 256
#define KEY_DOWN 80 + 256
#define KEY_RIGHT 77 + 256
#define KEY_LEFT 75 + 256


class BGame
{
    public:
        BGame();

        void initGame();
        //void positionMan(int,int);

        void welcome();
        void gameOver();

    private:
        BMan bomberman;

        int getKeyboard();



};
#endif // BGAME_H
