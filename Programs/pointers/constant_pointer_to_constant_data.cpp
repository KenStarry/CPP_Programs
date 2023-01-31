//
// Created by kenne on 1/31/2023.
//
#include <iostream>
using namespace std;

int main() {

    const int x = 10;
    const int *const p = &x;

    cout << p;
}
