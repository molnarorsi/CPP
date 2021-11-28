//
// Created by Orsolya on 28.11.2021.
//

#include "GraduationExam.h"
#include <vector>

int GraduationExam::numStudents() const {
    students.size();
}

void GraduationExam::enrollment(const string &filename) {
    vector<string> lines;
    string line;

    ifstream input_file(filename);
    if(!input_file.is_open()) {
        cerr << "Couldn't open file " << filename << "!" << endl;
    }

    while(getline(input_file, line)) {
        lines.push_back(line);
    }

    for(const auto &i : lines) {
        cout << i << endl;
    }

    input_file.close();
}

