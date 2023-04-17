//
// Created by kenne on 4/4/2023.
//
#include <iostream>

using namespace std;

const int MAX = 3;

int main() {

    double arr[MAX] = {50.67, 100.9, 150.23};
    double *ptr = arr;

    for (double i : arr) {
        cout << "Memory location of " << i << " = " << ptr << endl;
        ptr++;
    }

    return 0;
}