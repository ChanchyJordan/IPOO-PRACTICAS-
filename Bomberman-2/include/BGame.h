#ifndef BGAME_H
#define BGAME_H

#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <ctime>

#include "BMap.h"
#include "BMan.h"
#include "BBomb.h"
#include "BMenu.h"

#define KEY_UP 72 + 256
#define KEY_DOWN 80 + 256
#define KEY_RIGHT 77 + 256
#define KEY_LEFT 75 + 256


class BGame
{
    public:
        BGame();

        bool initGame();
        //void welcome();
        void gameOver(int*);
        void win();

    private:
        BMan bomberman;
        BBomb bomb;
        BMenu menu;
        int generateNum();
        int getKeyboard();


};
#endif // BGAME_H
