//
// Created by Orsolya on 14.10.2021.
//

#include "Point.h"


Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

double Point::distanceTo(const Point &point) const {
    double dist = sqrt(pow( (this->x) - (point.x), 2) + pow((this->y) - (point.y),2));
    return dist;
}






