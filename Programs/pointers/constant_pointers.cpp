//
// Created by kenne on 1/31/2023.
//
#include <iostream>

using namespace std;

int main() {

//    int x[2] = {10, 3};
    const int x = 10;
    const int *const p = &x;


//    x[0] = 20;

    int y = 20;
//    p = &y;

    cout << p;
}
