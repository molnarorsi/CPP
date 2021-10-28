//
// Created by Orsolya on 14.10.2021.
//

#include "Point.h"

int Point::counter{0};


Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
    ++counter;
}

Point::Point(const Point &what) {
    this->x = what.x;
    this->y = what.y;
    ++counter;

}

Point::~Point() {
//    this->x = 0;
//    this->y = 0;
    --counter;
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

int Point::getCounter() {
    return counter;
}








