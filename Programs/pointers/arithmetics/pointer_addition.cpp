//
// Created by kenne on 1/31/2023.
//
#include <iostream>
using namespace std;

int main() {

    int x = 10;
    int *p = &x;
    cout << "Initial p = " << p << endl;

    p += 2;
    cout << "Final p = " << p << endl;

}