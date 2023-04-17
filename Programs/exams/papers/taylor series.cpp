//
// Created by kenne on 4/17/2023.
//
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

//  convert deg to rad
template<typename T>
T convertToRad(T deg) {
    return (deg / 180) * PI;
}

int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

template<typename T>
T sine(T deg) {

    T x = convertToRad(deg);
    T sinX = 0.0;
    double actualSinX = sin(x);
    double error = 0.001;

    int i = 0;
    int count = 1;

    do {

        double num = pow(x, count);
        double denom = fact(count);

        if (i % 2 == 0) {
            sinX += num / denom;
        } else {
            sinX -= num / denom;
        }
        count += 2;
        i++;

    } while (i < 10);

    if (actualSinX - sinX < error) {
        return sinX;
    } else {
        return 0.0;
    }
}

template<typename T>
T cosine(T deg) {

    T x = convertToRad(deg);
    T cosX = 0.0;

    int i = 0;
    int count = 0;

    while (i < 10) {

        double num = pow(x, count);
        double denom = fact(count);

        if (i % 2 == 0) {
            cosX += num / denom;
        } else {
            cosX -= num / denom;
        }

        count += 2;
        i++;
    }

    return cosX;
}

int main() {

    double angle = 90;

    cout << "Sin(" << angle << ") = " << sine(angle) << endl;
    cout << "Cos(" << angle << ") = " << cosine(angle);


    return 0;
}



















