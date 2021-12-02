//
// Created by Orsolya on 28.11.2021.
//

#ifndef LAB10_2_GRADUATIONEXAM_H
#define LAB10_2_GRADUATIONEXAM_H

#include "Student.h"

class GraduationExam {
private:
    int year;
    map<int, Student> students;

public:
    void enrollment(const string& fileName);
    int numStudents() const;
    void readGradesOfSubjects(const string& subject, const string& filename);
    void computeFinalGrades();
    map<string, double> getGrades(int) const;
    int numPassed() const;
};


#endif //LAB10_2_GRADUATIONEXAM_H
