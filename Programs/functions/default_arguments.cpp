//
// Created by kenne on 1/24/2023.
//
#include <iostream>

using namespace std;

int x = 15;

int maximum(
        int x = 1,
        int y = 0,
        int z = 0
) {

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    //  the scope resolution operator accesses the Global variables
    int max = ::x;
    return max;
}

int main() {

    auto x = maximum();

    cout << "value of x Globally is " << x;
}
