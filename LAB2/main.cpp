#include <iostream>
#include "Point.h"


int main(int argc, char** argv) {
    Point p1(2,3);
    cout<<"p1( "<<p1.getX()<<","<<p1.getY()<<")"<<endl;
    Point p2(100, 200);
    cout<<"p2( "<<p2.getX()<<","<<p2.getY()<<")"<<endl;
    Point * pp1 = new Point(300, 400);
    Point * pp2 = new Point(500, 1000);
    cout<<"pp1( "<<pp1->getX()<<","<<pp1->getY()<<")"<<endl;
    cout<<"pp2( "<<pp2->getX()<<","<<pp2->getY()<<")"<<endl;
    p1.print();
    p2.print();
    cout << "Ket pont kozotti tavolsag: " << distance(*pp1,*pp2) << endl;
    cout << "Ket pont kozotti tavolsag: " << distance(p1, p2) << endl;
    //10 10 30 10 20 0 20 20
    Point p3(10, 10);
    Point p4(30, 10);
    Point p5(20, 0);
    Point p6(20, 20);
    cout << "n= ";
    cout << isSquare(p3,p4,p5,p6) << endl;
    testIsSquare("points.txt");
    cout << endl;
    createArray(3);
    cout << endl;
    Point * p7 = createArray(3);
    Point *p8 = createArray(3);
    cout <<endl;
    printArray(p7,3);
    cout << endl;
    cout << "Closest point pair: " << endl;
    pair<Point, Point> par = closestPoints(p7, 3);
    par.first.print();
    par.second.print();
    cout << endl;
    cout << "Farthest point pair: " << endl;
    pair<Point, Point> par1 = farthestPoints(p7,3);
    par1.first.print();
    par1.second.print();
    cout << endl;
    cout << "Sorted points: " << endl;
    sortPoints(p7, 3);
    cout << endl;
    cout << "n = " << compare(p4,p5);
    delete pp1;
    delete pp2;
    //delete pp3;
    return 0;
}
