#include <iostream>
#include <string>
#include "Student.h"
#include "GraduationExam.h"
using namespace std;

string subjects[] {"Romanian", "HUngarian", "Math"};

int main() {
    Student student1(1,"Bancsiko", "David");
    student1.addGrade("Romanian", 9.25);
    student1.addGrade("Hungarian", 6);
    student1.addGrade("Mathematics", 9.75);
    student1.addGrade("Informatics", 7);
    student1.computeAverage();

    Student student2(2, "Henning", "Arthur");
    student2.addGrade("Romanian", 10);
    student2.addGrade("Hungarian", 9.50);
    student2.addGrade("Mathematics", 10);
    student2.addGrade("Informatics", 10);
    student2.computeAverage();
    cout << student1 << endl;
    cout << student2;

    GraduationExam exam;
    exam.enrollment("names.txt");


    return 0;
}
