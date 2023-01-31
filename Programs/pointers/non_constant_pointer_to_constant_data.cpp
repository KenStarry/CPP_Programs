//
// Created by kenne on 1/31/2023.
//
#include <iostream>
using namespace std;

int main() {

    const int x = 5;
    const int *p = &x;

    int y = 20;
    p = &y;

    y = 50;
}