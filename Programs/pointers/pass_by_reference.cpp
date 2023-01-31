//
// Created by kenne on 1/31/2023.
//
#include <iostream>
using namespace std;

int square(int *p) {

    //  dereferencing the value in address p
    return *p * *p;
}

void square_2(int *p) {
    *p = *p * *p;
}

int main() {

    int x = 10;
//    int s = square(&x);

    square_2(&x);

    cout << x << endl;
//    cout << s << endl;
}
