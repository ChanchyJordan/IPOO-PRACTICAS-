#ifndef BDEMON_H
#define BDEMON_H

#include "BPerson.h"

class BDemon:BPerson
{
    public:
        BDemon();
        int checkMovement(int,int,vector< vector<char> >);



};

#endif // BDEMON_H
