//
// Created by Orsolya on 07.12.2021.
//

#ifndef LAB10_2_GRADUATIONINFO_H
#define LAB10_2_GRADUATIONINFO_H

#include "IGraduation.h"
#include "GraduationExam.h"
#include "Student.h"

class GraduationInfo : public IGraduation {
private:
    GraduationExam &graduationExam;
public:
    GraduationInfo(GraduationExam &graduationExam1);
    int getNumEnrolled() const override;
    int getNumPassed() const override;
    int getNumFailed() const override;
    Student getStudent(int) const override;
    string getFirstName(int) const override;
    string getLastName(int) const override;
    double getAverage(int) const override;
    map<string, double> getResult(int) const override;
    void printResult(ostream&) const override;
    void printPassed(ostream&) const override;
    void printFailed(ostream&) const override;
};


#endif //LAB10_2_GRADUATIONINFO_H
