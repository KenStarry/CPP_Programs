//
// Created by kenne on 4/17/2023.
//
#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream studentsFile;
    ofstream studentsMarks;

    studentsFile.open(R"(S:\Programming\C++\Programs\exams\papers\students.txt)", ios::in);
    studentsMarks.open(R"(S:\Programming\C++\Programs\exams\papers\student_marks.csv)", ios::app);

    string studentDetail;
    int cat1, cat2, exam;

    studentsMarks << "REGNO,CAT1,CAT2,EXAM" << endl;
    while (getline(studentsFile, studentDetail)) {

        string reg = studentDetail.substr(0, studentDetail.find('\t'));

        cout << "CAT 1 : ";
        cin >> cat1;

        cout << "CAT 2 : ";
        cin >> cat2;

        cout << "EXAM : ";
        cin >> exam;

        if (cat1 == 0) {
            studentsMarks << reg << "," << " " << "," << cat2 << "," << exam << endl;
        } else {
            studentsMarks << reg << "," << cat1 << "," << cat2 << "," << exam << endl;
        }
    }

    studentsMarks.close();
    studentsFile.close();
}

































