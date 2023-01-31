//
// Created by kenne on 1/31/2023.
//
#include <iostream>
using namespace std;

int sum(int *p, int size) {

    cout << "Memory location of p is " << p << endl;

    int s = 0;

    for (int i = 0; i < size; i++) {
        s += p[i];
    }

    return s;
}

int main() {

    double data[3] = {40, 50, 30};

    //double arg = sum(data, 3);

    cout << data;
}


















