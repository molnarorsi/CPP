//
// Created by Orsolya on 14.10.2021.
//

#include "PointSet.h"
#include "Point.h"

void PointSet::computeDistances() {
    for (int i = 0; i < n-1; ++i) {
        for(int j = i+1; j < n; j++) {
            distances.emplace_back(points[i].distanceTo(j));
        }
    }
}


PointSet::PointSet(int n) {
    this->n = n;
    points.reserve(n);
    srand((time(0)));
    for (int i = 0; i < n; ++i) {
        points.emplace_back( Point(rand() % M, rand() % M)  );
    }
    computeDistances();
}

double PointSet::maxDistance() const {
    return *max_element(distances.begin(),distances.end());
}

double PointSet::minDistance() const {
    return *min_element(distances.begin(),distances.end());
}

int PointSet::numDistances() const {
    return distances.size();
}

void PointSet::printPoints() const {
    for(auto p:points) {
        cout << "[" << p.getX() << " , " << p.getY() << "]  ";
    }
    cout << endl;
}

void PointSet::printDistances() const {
    for(auto dist:distances) {
        cout << dist << "    ";
    }
    cout << endl;
}

bool xCompare(const Point &a, const Point &b){
    return (a.getX() < b.getX());
}

bool yCompare(const Point &a, const Point &b){
     return (a.getY() < b.getY());
}


void PointSet::sortPointsX() {
    sort(points.begin(), points.end(),xCompare);
}

void PointSet::sortPointsY() {
    sort(points.begin(),points.end(),yCompare);
}

void PointSet::sortDistances() {
    sort(distances.begin(), distances.end());
}

int PointSet::numDistinctDistances() {
    auto distances = this->distances;
    sortDistances();
    auto it = unique(distances.begin(),distances.end());
    return it - distances.begin();
}








