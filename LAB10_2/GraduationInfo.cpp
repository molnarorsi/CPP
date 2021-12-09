//
// Created by Orsolya on 07.12.2021.
//

#include "GraduationInfo.h"
#include "GraduationExam.h"
#include "Student.h"
#include "IGraduation.h"

GraduationInfo::GraduationInfo(GraduationExam &graduationExam1) : graduationExam(graduationExam1) {}

int GraduationInfo::getNumEnrolled() const {
    return 0;
}

int GraduationInfo::getNumPassed() const {
    return 0;
}

int GraduationInfo::getNumFailed() const {
    return 0;
}

Student GraduationInfo::getStudent(int id) const {
    return IGraduation::getStudent(id);
}

string GraduationInfo::getFirstName(int id) const {
    return IGraduation::getFirstName(id);
}

string GraduationInfo::getLastName(int id) const {
    return IGraduation::getLastName(id);
}

double GraduationInfo::getAverage(int id) const {
    return IGraduation::getAverage(id);
}

map<string, double> GraduationInfo::getResult(int id) const {
    return IGraduation::getResult(id);
}

void GraduationInfo::printResult(ostream& out) const {
    IGraduation::printResult(out);
}

void GraduationInfo::printPassed(ostream& out) const {
    IGraduation::printPassed(out);
}

void GraduationInfo::printFailed(ostream& out) const {
    IGraduation::printFailed(out);
}