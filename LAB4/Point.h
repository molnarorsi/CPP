//
// Created by Orsolya on 14.10.2021.
//

#ifndef LAB4_POINT_H
#define LAB4_POINT_H

#include <math.h>

#define M 2000

class Point{
private:
    int x, y;
    static int counter;
public:
    Point( int x=0, int y=0);
    int getX() const;
    int getY() const;
    double distanceTo(const Point& point)const ;
    Point(const Point&);
    ~Point();
    static int getCounter();
};


#endif //LAB4_POINT_H
