#include "BMap.h"

int BMap::initMap(){
    buildMapEdge();
    buildMap();
    buildWallsMap();
    putDemons();
    printMap();

    return 0;
}

void BMap::buildMapEdge(){
    unsigned value=matrix.size();
    for(unsigned i=1;i<value-1;i++)
        matrix[i][0]=matrix[i][value-1]='|';

    for(unsigned i=0;i<value;i++)
        matrix[0][i]=matrix[value-1][i]='-';

    matrix[1][1]='^';

}

void BMap::printMap(){
     system("cls");
     system("color 80");
    unsigned value=matrix.size();
    for(unsigned i=0;i<value;i++){
        cout<<"                  ";
        for(unsigned j=0;j<value;j++){
            cout<<" "<<matrix[i][j];
        }

        cout<<endl;
    }
}
