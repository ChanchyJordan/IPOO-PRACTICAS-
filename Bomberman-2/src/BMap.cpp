#include "BMap.h"

void BMap::movement(){

}

int BMap::initMap(){
    buildMapEdge();
    buildMap();
    buildWallsMap();
    printMap();

    return 0;
}

void BMap::buildMapEdge(){
    for(unsigned i=1;i<matrix.size()-1;i++)
        matrix[i][0]=matrix[i][11]='|';

    for(unsigned i=0;i<matrix.size();i++)
        matrix[0][i]=matrix[11][i]='-';

}

void BMap::printMap(){

    for(unsigned i=0;i<matrix.size();i++){
        cout<<"            ";
        for(unsigned j=0;j<matrix.size();j++){
            cout<<" "<<matrix[i][j];
        }

        cout<<endl;
    }
}
