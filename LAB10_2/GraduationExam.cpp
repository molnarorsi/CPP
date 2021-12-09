//
// Created by Orsolya on 28.11.2021.
//

#include "GraduationExam.h"
#include <vector>

int GraduationExam::numStudents() const {
    return students.size();
}

void GraduationExam::enrollment(const string &fileName) {
    ifstream input_file(fileName);
    if( !input_file.is_open() ) {
        cerr << "Couldn't open file " << fileName << "!" << endl;
    }

    string line;

    while(getline(input_file, line)) {
        if(line.length() != 0) {
            istringstream ss(line);
            int id;
            double grades;
            map<int, Student>::iterator it;
            string firstName, lastName;
            ss >> id;
            getline(ss, firstName);
            getline(ss, lastName);
            ss >> grades;
            const Student student(id, lastName, firstName);
            students.insert(pair<int, Student>(id, student));
        }
    }
    for(const auto& stud : students) {
        cout << "Student with ID nr." << stud.first << endl;
        cout << "\t\tFull name: " << stud.second.getLastName() << " " << stud.second.getFirstName() << endl;
        cout << "\t\t\tGrades: " << endl;
        //for(_Rb_tree_iterator<pair<const int, Student>> it = students.begin(); it != students.end(); it++) {
            cout << "\t\t\t\t" << stud.second.getGrades();
        //}

        cout << "\t\t\tAverage: " << stud.second.getAverage() << endl;

    }
}

void GraduationExam::computeFinalGrades() {
    for(auto & student : students) {
        student.second.computeAverage();
        cout << student.second.getId() << " " << student.second.getAverage() << endl;
    }
}

map<string, double> GraduationExam::getGrades(int ID) const {
    map<string, double> grades;
    return grades;
}

void GraduationExam::readGradesOfSubjects(const string &subject, const string &fileName) {
    ifstream input_file(fileName);
    if( !input_file.is_open() ) {
        cerr << "Couldn't open file " << fileName << "!" << endl;
    }

    string line;

    while(getline(input_file, line)) {
        istringstream ss(line);
        int id;
        double grade;

        ss >> id;
        ss >> grade;
        students.find(id)->second.addGrade(subject, grade);
    }
}

int GraduationExam::numPassed() const {
    return 0;
}
