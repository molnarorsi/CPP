//
// Created by Orsolya on 07.12.2021.
//

#ifndef LAB10_2_IGRADUATION_H
#define LAB10_2_IGRADUATION_H

#include "Student.h"

class IGraduation {
public:
    virtual int getNumEnrolled() const = 0;
    virtual int getNumPassed() const = 0;
    virtual int getNumFailed() const = 0;
    virtual Student getStudent(int) const;
    virtual string getFirstName(int) const;
    virtual string getLastName(int) const;
    virtual double getAverage(int) const;
    virtual map<string, double> getResult(int) const;
    virtual void printResult(ostream&) const;
    virtual void printPassed(ostream&) const;
    virtual void printFailed(ostream&) const;
};


#endif //LAB10_2_IGRADUATION_H
