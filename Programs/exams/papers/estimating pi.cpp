//
// Created by kenne on 4/15/2023.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double pi = 2.0;
    int num = 2;
    double denom = ::sqrt(2);

    int i = 0;

    while (i < 100) {

        pi *= num / denom;
        denom = ::sqrt(2 + denom);

        cout << pi << endl;
        i++;
    }

    return 0;
}