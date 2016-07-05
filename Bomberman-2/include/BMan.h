#ifndef BMAN_H
#define BMAN_H

#include "BPerson.h"
#include "BBomb.h"
#include <windows.h>

class BMan:public BPerson
{
    public:
        BMan();
        int checkMovement(int,int,vector< vector<char> >);

    private:
        //int live;


};

#endif // BMAN_H
