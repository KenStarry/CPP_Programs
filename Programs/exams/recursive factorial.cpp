//
// Created by kenne on 4/2/2023.
//
#include <iostream>

using namespace std;

int factorial(int n = 5) {
    if (n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {

    int n;

    cout << "Factorial of the first :";
    cin >> n;

    if (n == 0) {
        cout << endl << factorial();
    } else {
        cout << endl << factorial(n);
    }

    return 0;
}
