//
// Created by Orsolya on 28.11.2021.
//

#include "GraduationExam.h"
#include <vector>

int GraduationExam::numStudents() const {
    students.size();
}

void GraduationExam::enrollment(const string &fileName) {
//    vector<string> lines;
//    string line;
//
//    ifstream input_file(fileName);
//    if(!input_file.is_open()) {
//        cerr << "Couldn't open file " << fileName << "!" << endl;
//    }
//
//    while(getline(input_file, line)) {
//        lines.push_back(line);
//    }
//
//    for(const auto &i : lines) {
//        cout << i << endl;
//    }
//
//    input_file.close();
    ifstream input_file(fileName);
    if( !input_file.is_open() ) {
        cerr << "Couldn't open file " << fileName << "!" << endl;
    }

    string line;

    while(getline(input_file, line)) {
        if(line.length() != 0) {
            istringstream ss(line);
            int id;
            string firstName, lastName;
            getline()
        }
    }
}

void GraduationExam::computeFinalGrades() {
    for(auto it = students.begin(); it != students.end(); it++) {
        it->second.computeAverage();

    }
}