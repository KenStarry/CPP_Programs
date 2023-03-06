//
// Created by kenne on 3/6/2023.
//
#include <iostream>
#include <fstream>

int main() {

    std::ofstream fout;

    fout.open(R"(S:\Programming\C++\Programs\files\my files\greetings.txt)", std::ios::out);

    fout << "Sheilla is such a beautiful, lovely lady...however, a huge drama queen.";

    fout.close();

    return 0;
}
