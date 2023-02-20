//
// Created by kenne on 1/31/2023.
//
#include <iostream>

using namespace std;

int factorial(int x) { return x; }

int main() {

    int (*fnptr) (int) = factorial;

    cout << fnptr(10) << endl;
    cout << reinterpret_cast<void*>(fnptr);

}