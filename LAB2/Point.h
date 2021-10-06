//
// Created by Orsolya on 30.09.2021.
//

#ifndef LAB2_POINT_H
#define LAB2_POINT_H

#include <math.h>
#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;

class Point {
    private:
        int x,y;
    public:
        Point( int x=0, int y=0);
        int getX() const;
        int getY() const;
    void print()const;
};

double distance(const Point& a, const Point& b);
bool isSquare(const Point& a, const Point& b, const Point& c, const Point& d);
void testIsSquare(const char * filename);
Point* createArray(int numPoints);
void printArray(Point* points, int numPoints);
pair<Point, Point> closestPoints(Point* points, int numPoints);
pair<Point, Point> farthestPoints(Point* points, int numPoints);
bool compare(Point a, Point b);
void sortPoints(Point* points, int numPoints);
Point* farthestPointsFromOrigin(Point* points, int numPoints);
void deletePoints(Point* points);

#endif //LAB2_POINT_H
