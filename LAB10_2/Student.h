//
// Created by Orsolya on 28.11.2021.
//

#ifndef LAB10_2_STUDENT_H
#define LAB10_2_STUDENT_H

#include <map>
#include <string>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

class Student {
private:
    int ID;
    string lastName;
    string firstName;
    map<string, double> grades;
    double average;
    static int studentCounter;

public:
    Student(int ID, const string& lastName, const string& firstName);
    int getId() const;
    const string &getLastName() const;
    const string &getFirstName() const;
    double getAverage() const;
    void addGrade(const string& subject, double grade);
    const map<string, double> &getGrades() const;
    double getGrade(string& subject) const;
    void computeAverage();
    friend ostream& operator<<(ostream& out, Student& student);
};


#endif //LAB10_2_STUDENT_H
