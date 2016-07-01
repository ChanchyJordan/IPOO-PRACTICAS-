#ifndef BPERSON_H
#define BPERSON_H

#include <vector>
#include <iostream>

using namespace std;

class BPerson
{
    public:
        BPerson();

        int getX(){return positionX;}
        int getY(){return positionY;}

        int changePosition(int,vector <vector <char> >);
        int checkMovement(int,int,vector< vector<char> >);

    protected:
        int positionX;
        int positionY;
};

#endif // BPERSON_H
