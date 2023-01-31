//
// Created by kenne on 1/24/2023.
//
#include <iostream>
using namespace std;

auto factorial(int n) {

    if (n == 1) {
        return 1;

    } else {
        return n * factorial(n - 1);
    }
}

int main() {

    int fact = factorial(5);

    cout << "Factorial = " << fact;
}
