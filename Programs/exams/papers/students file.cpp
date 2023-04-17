//
// Created by kenne on 4/17/2023.
//
#include <iostream>
#include <fstream>
#include <array>
using namespace std;

int main() {

    ofstream studentsFile;
    string reg, fname, lname;

    studentsFile.open(R"(S:\Programming\C++\Programs\exams\papers\students.txt)", ios::out);

    for (int i = 0; i < 5; i++) {
        cout << "REG : ";
        getline(cin, reg);

        cout << "FName : ";
        getline(cin, fname);

        cout << "LName : ";
        getline(cin, lname);

        studentsFile << reg << "\t" << fname << " " << lname << endl;
    }

    studentsFile.close();


    return 0;
}
