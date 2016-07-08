#ifndef BMENU_H
#define BMENU_H

#include<iostream>
#include <windows.h>

#define KEY_UP 72 + 256
#define KEY_DOWN 80 + 256
#define KEY_RIGHT 77 + 256
#define KEY_LEFT 75 + 256

using namespace std;

class BMenu
{
    public:
        BMenu();
        void start();

        void printBomberman();
        void printBomb1();
        void printBomb2();

        void printExploit1();
        void printExploit2();
        void printExploit3();

        void secondMenu();

        void selectMap();

        int getNumMap(){return numMap;}


    private:
        int numMap;

};


#endif // BMENU_H
