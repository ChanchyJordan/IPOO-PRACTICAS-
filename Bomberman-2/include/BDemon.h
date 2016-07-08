#ifndef BDEMON_H
#define BDEMON_H

#include "BPerson.h"

class BDemon:public BPerson
{
    public:
        BDemon(int,int);
        int checkMovement(int,int,vector< vector<char> >);



};

#endif // BDEMON_H
