//
// Created by Orsolya on 30.09.2021.
//

#include "Point.h"
#include <math.h>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <time.h>

using namespace std;

Point::Point(int x, int y) {
    if (x >= 0 && x <= 2000 && y >= 0 && y <= 2000){
        this->x = x;
        this->y = y;
    }
    else{
        this->x = 0;
        this->y = 0;
    }
}

int Point::getX() const {
    return x;
}
int Point::getY() const {
    return y;
}

void Point::print()const {
    cout << "x: " << this->getX() << endl;
    cout << "y: " <<this->getY() << endl;
}

double distance(const Point& a, const Point& b) {
    double dist = sqrt(pow(b.getX()-a.getX(),2) + pow(b.getY()-a.getY(),2));
    return dist;
}

bool isSquare(const Point& a, const Point& b, const Point& c, const Point& d) {
    double* elek = new double[6];
    elek[0] = distance(a,b);
    elek[1] = distance(a,c);
    elek[2] = distance(a,d);
    elek[3] = distance(b,c);
    elek[4] = distance(b,d);
    elek[5] = distance(c,d);
    sort(elek, elek+6);

    if(elek[0] == elek[3] && elek[0] < elek[4] && elek[4] == elek[5] && elek[0] > 0) {
        return true;
    }
    else {
        return false;
    }
}

void testIsSquare(const char* fileName) {
    ifstream fin(fileName);
    if (!fin) {
        exit(0);
    }

    int x, y;
    Point *square = new Point[4];

    int j =0;
    while (!fin.eof()) {
        cout << j++ << "!" << endl;
        for (int i = 0; i < 4; i++) {
            fin >> x >> y;
            square[i] = Point(x, y);
        }
        for(int i = 0; i < 4; ++i) {
            square[i].print();
        }

        isSquare(square[0], square[1], square[2], square[3]) ? cout << "\tYES" : cout << "\tNO";
        cout << endl;

    }
}

Point* createArray(int numPoints) {
    int x,y;
    Point * randoms = new Point[numPoints];
    srand(time(0));
    for(int i = 0; i < numPoints; ++i) {
        x = rand() % 2001;
        y = rand() % 2001;
        randoms[i] = Point(x, y);
    }

    return randoms;
}

void printArray(Point* points, int numPoints) {
    for(int i = 0; i < numPoints; i++) {
        points[i].print();
    }
}

pair<Point, Point> closestPoints(Point* points, int numPoints) {
    double dist;
    double min = 4000;
    pair<Point, Point> pair = {0,0};
    for(int i = 0; i < numPoints; i++) {
        for(int j = 0; j < numPoints; j++) {
            if((dist = distance(points[i],points[j])) < min && (i!=j)) {
                min = dist;
                pair.first = points[i];
                pair.second = points[j];
            }
        }
    }
    return pair;
}


pair<Point, Point> farthestPoints(Point* points, int numPoints) {
    double dist;
    double max = 0;
    pair<Point, Point> pair = {0,0};
    for(int i = 0; i < numPoints; i++) {
        for(int j = 0; j < numPoints; j++) {
            if((dist = distance(points[i],points[j])) > max && (i!=j)) {
                max = dist;
                pair.first = points[i];
                pair.second = points[j];
            }
        }
    }
    return pair;
}
bool compare(Point a, Point b) {
    return (a.getX() < b.getX());
}
void sortPoints(Point* points, int numPoints) {
    sort(points, points+numPoints,compare);
    for(int i = 0; i < numPoints; i++) {
        points[i].print();
    }
}

Point* farthestPointsFromOrigin(Point* points, int numPoints) {
    Point * array = new Point[10];
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(distance(points[i] < points[j]))
        }
    }
}


