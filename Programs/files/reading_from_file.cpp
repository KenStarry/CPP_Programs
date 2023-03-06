//
// Created by kenne on 3/6/2023.
//
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream fin("greetings.txt", ios::in);

    fin.open(R"(S:\Programming\C++\Programs\files\my files\greetings.txt)", ios::in);

    //  Execute a loop until end of file
    string hey;

    while(getline(fin, hey)) {
        cout << hey << endl;
    }

    fin.close();

    return 0;
}
