//
// Created by Orsolya on 28.11.2021.
//

#include "Student.h"

#include <iomanip>

static int studentCounter = {0};

int Student::getId() const {
    return ID;
}

const string &Student::getLastName() const {
    return lastName;
}

const string &Student::getFirstName() const {
    return firstName;
}

double Student::getAverage() const {
    return average;
}

const map<string, double> &Student::getGrades() const {
    return grades;
}

Student::Student(int ID, string &lastName, string &firstName) {
    this->ID = studentCounter++;
    this->lastName = lastName;
    this->firstName = firstName;
}

void Student::addGrade(string subject[], double grade) {
    return subject->push_back()
}

void Student::computeAverage() {
    double sum = 0;
    for(auto it = grades.begin(); it != grades.end(); it++ ) {
        sum += it->second;
    }
    double avg = sum/grades.size();
}

ostream &operator<<(ostream &out, Student &student) {
    out << "Student with ID nr." << student.ID << endl;
    out << "\t\tFull name: " << student.lastName << " " << student.firstName << endl;
    out << "\t\tGrades: ";
    for(auto it = student.grades.begin(); it != student.grades.end(); it++) {
        out << it->second;
    }
    out << endl;
    out << "\t\tAverage: " << student.average << endl;
    return out;
}

