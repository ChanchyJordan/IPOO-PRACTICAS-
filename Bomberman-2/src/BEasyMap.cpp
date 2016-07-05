#include "BEasyMap.h"

BEasyMap::BEasyMap(){
    initMap();

}

void BEasyMap::buildMap(){ //MUROS INDESTRUCTIBLES
    matrix[1][11]=matrix[1][14]=matrix[1][17]=matrix[2][2]=matrix[2][6]=matrix[2][8]=matrix[2][9]=matrix[2][15]
    =matrix[2][19]=matrix[3][4]=matrix[3][13]=matrix[3][17]=matrix[4][2]=matrix[4][4]=matrix[4][6]=matrix[4][9]
    =matrix[4][12]=matrix[4][15]=matrix[5][7]=matrix[5][15]=matrix[5][19]=matrix[6][2]=matrix[6][3]=matrix[6][5]
    =matrix[6][9]=matrix[6][11]=matrix[6][13]=matrix[6][17]=matrix[6][18]=matrix[6][19]=matrix[7][7]=matrix[7][11]
    =matrix[8][2]=matrix[8][4]=matrix[8][7]=matrix[8][11]=matrix[8][12]=matrix[8][14]=matrix[8][17]=matrix[8][19]
    =matrix[9][2]=matrix[9][5]=matrix[9][9]=matrix[9][15]=matrix[9][17]=matrix[9][20]=matrix[10][7]=matrix[10][12]
    =matrix[11][3]=matrix[11][6]=matrix[11][7]=matrix[11][11]=matrix[11][14]=matrix[11][17]=matrix[11][19]
    =matrix[12][1]=matrix[12][2]=matrix[12][9]=matrix[12][14]=matrix[12][15]=matrix[13][3]=matrix[13][6]
    =matrix[13][9]=matrix[13][12]=matrix[13][18]=matrix[14][5]=matrix[14][8]=matrix[14][11]=matrix[14][15]
    =matrix[15][2]=matrix[15][9]=matrix[15][12]=matrix[15][14]=matrix[15][17]=matrix[15][19]=matrix[15][20]
    =matrix[16][2]=matrix[16][3]=matrix[16][6]=matrix[16][17]=matrix[17][6]=matrix[17][8]=matrix[17][10]
    =matrix[17][12]=matrix[17][14]=matrix[17][19]=matrix[18][3]=matrix[18][6]=matrix[18][10]=matrix[18][16]
    =matrix[19][2]=matrix[19][5]=matrix[19][9]=matrix[19][11]=matrix[19][13]=matrix[19][15]=matrix[19][18]
    =matrix[20][7]=matrix[20][18]='0';

}

void BEasyMap::buildWallsMap(){  //CONTRUYE MUROS DESTRUCTIBLES

    matrix[1][8]=matrix[1][10]=matrix[2][3]=matrix[2][10]=matrix[2][13]=matrix[2][16]
    =matrix[3][1]=matrix[3][5]=matrix[3][9]=matrix[3][16]=matrix[4][1]=matrix[4][8]=matrix[4][10]=matrix[4][18]
    =matrix[5][11]=matrix[5][14]=matrix[5][17]=matrix[6][1]=matrix[6][7]=matrix[7][2]=matrix[7][3]=matrix[7][5]
    =matrix[7][9]=matrix[7][15]=matrix[7][16]=matrix[8][6]=matrix[8][18]=matrix[7][16]=matrix[9][4]=matrix[9][8]
    =matrix[9][10]=matrix[9][14]=matrix[10][1]=matrix[10][2]=matrix[10][9]=matrix[10][13]=matrix[11][2]
    =matrix[11][10]=matrix[11][18]=matrix[12][6]=matrix[12][7]=matrix[12][10]=matrix[12][13]=matrix[12][20]
    =matrix[13][2]=matrix[13][4]=matrix[13][5]=matrix[13][15]=matrix[13][17]=matrix[14][4]=matrix[15][7]
    =matrix[15][13]=matrix[15][7]=matrix[15][16]=matrix[15][18]=matrix[16][5]=matrix[16][8]=matrix[17][17]
    =matrix[18][1]=matrix[18][4]=matrix[18][7]=matrix[18][14]=matrix[20][10]=matrix[20][16]='*';

}

void BEasyMap::putDemons(){
    BDemon demon1(3,19);
    BDemon demon2(6,12);
    BDemon demon3(10,16);
    BDemon demon4(10,3);
    BDemon demon5(15,4);
    BDemon demon6(16,9);


    listDemon.push_back(demon1);
    listDemon.push_back(demon2);
    listDemon.push_back(demon3);
    listDemon.push_back(demon4);
    listDemon.push_back(demon5);
    listDemon.push_back(demon6);

    matrix[3][19]=matrix[6][12]=matrix[10][16]=matrix[10][3]=matrix[15][4]=matrix[16][9]='x';




}
