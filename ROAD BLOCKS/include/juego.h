#ifndef JUEGO_H
#define JUEGO_H
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//#include <string.h>

#define KEY_UP 72 + 256
#define KEY_DOWN 80 + 256
#define KEY_RIGHT 77 + 256
#define KEY_LEFT 75 + 256

class Juego
{
    public:
        Juego();
    private:
        char vect[21][71];

        int initGame();
        int initMatrizEstable();
        int initMatriz();
        int imprimir();
        int mapaFacil();
        int mapaNormal();
        int mapaDificil();
        int posicion(bool *bucle);
        int mover(short int *num1,short int *num2,bool *validar,bool *bucle);
        int gameover(bool *bucle);
        int win(bool *bucle);
        int seguirJugando(bool *bucle);
};
#endif // JUEGO_H
