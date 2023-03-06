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

    string reg;
    int cat1, cat2, exam;
    while (getline(stud_reg_fin, reg)) {

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

        marks_fout << reg << ", "
                   << cat1 << ", "
                   << cat2 << ", "
                   << exam << endl;

    }

    stud_reg_fin.close();
    marks_fout.close();

    return 0;
}