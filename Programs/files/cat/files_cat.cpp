//
// Created by kenne on 3/6/2023.
//
#include <iostream>
#include <fstream>
#include <array>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {

    //  MARKS.CSV
    array<array<float, 3>, 5> data{};

    ifstream results_fin(R"(S:\Programming\C++\Programs\files\my files\marks.csv)", ios::in);

    vector<string> results_row;

    //  temp uses the first column as the key
    string line, marks, temp;

    int i = 0;
    while (results_fin >> temp) {

        results_row.clear();

        getline(results_fin, line);

        stringstream s(line);

        int j = 0;
        while (getline(s, marks, ',')) {

            results_row.push_back(marks);

            float markNum = stof(marks);

            data[i].at(j) = markNum;
            j++;
        }

        cout << endl;
        i++;
    }

    results_fin.close();

    string studsLine, marksLine;
    string reg, fname, lname;

    ofstream stud_results(R"(S:\Programming\C++\Programs\files\my files\results.csv)", ios::out);
    ifstream read_from_studs(R"(S:\Programming\C++\Programs\files\my files\students.txt)", ios::in);
    ifstream read_from_marks(R"(S:\Programming\C++\Programs\files\my files\marks.csv)", ios::in);

    int iterate = 0;
    stud_results << "SR. No" << ", "
                 << "REG_NO" << ", "
                 << "Last Name" << ", "
                 << "First Name" << ", "
                 << "CAT 1" << ", "
                 << "CAT 2" << ", "
                 << "EXAM" << ", "
                 << "TOTAL" << ", "
                 << "GRADE" << ", "
                 << "COMMENT" << ", "
                 << endl;

    while (getline(read_from_studs, studsLine)) {

        read_from_studs >> reg >> fname >> lname;

        float total_marks;

        if (data[iterate].at(0) < 0 ||
            data[iterate].at(1) < 0 ||
            data[iterate].at(2) < 0) {

            total_marks = -1;
        } else {
            total_marks = data[iterate].at(0) + data[iterate].at(1) + data[iterate].at(2);
        }

        char grade;
        if (total_marks >= 70 && total_marks < 100) {
            grade = 'A';
        } else if (total_marks >= 60 && total_marks < 70) {
            grade = 'B';
        } else if (total_marks >= 50 && total_marks < 60) {
            grade = 'C';
        } else if (total_marks >= 40 && total_marks < 50) {
            grade = 'D';
        } else if (total_marks == 0 && total_marks < 40) {
            grade = 'E';
        } else {
            grade = 'F';
        }

        string comment;
        if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
            comment = "PASS";
        } else if (grade == 'E') {
            comment = "FAIL";
        } else {
            comment = "INCOMPLETE";
        }

        //  store student details
        stud_results << iterate + 1 << ", "
                     << reg << ", "
                     << lname << ", "
                     << fname << ", "
                     << data[iterate].at(0) << ", "
                     << data[iterate].at(1) << ", "
                     << data[iterate].at(2) << ", "
                     << total_marks << ", "
                     << grade << ", "
                     << comment << ", "
                     << endl;

        iterate++;
    }

    read_from_studs.close();
    read_from_marks.close();
    stud_results.close();

    return 0;
}