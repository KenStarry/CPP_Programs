//
// Created by kenne on 3/6/2023.
//
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    //  MARKS.CSV
    ofstream marks_fout(R"(S:\Programming\C++\Programs\files\my files\marks.csv)", ios::out);

    //  reading from student.txt
    ifstream stud_reg_fin(R"(S:\Programming\C++\Programs\files\my files\students.txt)", ios::in);

    char comma = ',';
    string reg;
    int cat1, cat2, exam;
    while (getline(stud_reg_fin, reg)) {

        string formattedReg = reg.substr(0, reg.find('\t'));

        //  append to csv file
        //  reading cat 1
        cout << "Cat 1 : ";
        cin >> cat1;

        //  reading fname
        cout << "Cat 2 : ";
        cin >> cat2;

        //  reading lname
        cout << "Exam : ";
        cin >> exam;

        if (cat1 == 0 && cat2 == 0) {

            marks_fout << formattedReg << ", "
                       << -1 << ", "
                       << -1 << ", "
                       << exam << endl;
        } else if (cat1 == 0) {

            marks_fout << formattedReg << ", "
                       << -1 << ", "
                       << cat2 << ", "
                       << exam << endl;
        } else if (cat2 == 0 ) {

            marks_fout << formattedReg << ", "
                       << cat1 << ", "
                       << -1 << ", "
                       << exam << endl;
        } else {
            marks_fout << formattedReg << ", "
                       << cat1 << ", "
                       << cat2 << ", "
                       << exam << endl;
        }
    }

    stud_reg_fin.close();
    marks_fout.close();

    return 0;
}