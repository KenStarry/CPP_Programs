//
// Created by kenne on 3/6/2023.
//
#include <iostream>
#include <fstream>
using namespace std;

int main () {

    //  creating the student register - students.txt
    ofstream stud_fout(R"(S:\Programming\C++\Programs\files\my files\students.txt)", ios::out);

    string reg, fname, lname;

    //  writing to the file
    for (int i = 0; i < 5; i++) {

        //  reading reg
        cout << "Reg : ";
        getline(cin, reg);

        //  reading fname
        cout << "First Name : ";
        getline(cin, fname);

        //  reading lname
        cout << "Last Name : ";
        getline(cin, lname);

        stud_fout << reg << " " << fname << " " << lname << endl;
    }

    stud_fout.close();

    return 0;
}