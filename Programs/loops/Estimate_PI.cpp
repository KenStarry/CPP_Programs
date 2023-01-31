//
// Created by kenne on 1/17/2023.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double pi = 2.0;
    double denom = ::sqrt(2);
    double term = 2 / denom;

    while (term != 1.0) {

        pi *= term;
        denom = ::sqrt(2 + denom);

        term = 2 / denom;
    }

    cout << "PI = " << pi;

}
