#ifndef VECT_H
#define VECT_H
#define SIZE 3

class Vect
{
    public:
        int matriz[SIZE][SIZE];
        Vect();
        Vect(Vect matriz1,Vect matriz2);
        int print();
};

#endif // VECT_H
