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

Student::Student(int ID, const string &lastName, const string &firstName) {
    this->ID = ID;
    this->lastName = lastName;
    this->firstName = firstName;
    this->average = 0;
}

void Student::addGrade(const string& subject, double grade) {
    grades.emplace(subject, grade);
}

void Student::computeAverage() {
    double sum = 0;
    for(auto it = grades.begin(); it != grades.end(); it++ ) {
        if(it->second < 5) {
            sum = 0;
            break;
        }
        sum += it->second;
    }
    average = sum/grades.size();
}

ostream &operator<<(ostream &out, Student &student) {
    out << "Student with ID nr." << student.ID << endl;
    out << "\t\tFull name: " << student.lastName << " " << student.firstName << endl;
    out << "\t\tGrades: " << endl;
    for(auto it = student.grades.begin(); it != student.grades.end(); it++) {
        out <<"\t\t\t"<< it->first << " " << it->second << endl;
    }

    out << "\t\tAverage: " << student.average << endl;
    return out;
}

double Student::getGrade(string& subject) const {
    auto it = grades.find(subject);
    return it->second;
}

