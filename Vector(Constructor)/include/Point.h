#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point();
        double get_x(){return _x;}
        double get_y(){return _y;}
        int setPoint(double x,double y);
    private:
        double _x,_y;
        //void printPoint();
};

#endif // POINT_H
