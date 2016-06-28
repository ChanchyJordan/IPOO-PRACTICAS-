#include "BEasyMap.h"

BEasyMap::BEasyMap(){
    initMap();

}

void BEasyMap::buildMap(){
    matrix[2][2]=matrix[2][6]=matrix[2][8]=matrix[2][9]=matrix[3][4]=matrix[4][2]=matrix[4][4]=matrix[4][6]=
    matrix[4][9]=matrix[5][7]=matrix[6][2]=matrix[6][3]=matrix[6][5]=matrix[6][9]=matrix[7][7]=matrix[8][2]=
    matrix[8][4]=matrix[8][7]=matrix[9][2]=matrix[9][5]=matrix[9][9]=matrix[10][7]='O';

}

void BEasyMap::buildWallsMap(){
    matrix[1][3]=matrix[1][5]=matrix[1][8]=matrix[1][10]=matrix[2][3]=matrix[2][10]=matrix[3][1]=matrix[3][5]
    =matrix[3][9]=matrix[4][1]=matrix[4][3]=matrix[4][8]=matrix[4][10]=matrix[5][4]=matrix[6][1]=matrix[6][7]
    =matrix[7][2]=matrix[7][3]=matrix[7][5]=matrix[7][9]=matrix[8][6]=matrix[9][4]=matrix[9][8]=matrix[9][10]
    =matrix[10][1]=matrix[10][2]=matrix[10][9]='#';
}

