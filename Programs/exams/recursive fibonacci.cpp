//
// Created by kenne on 4/3/2023.
//
#include <iostream>

using namespace std;

int fibonacci_recursive(int index) {

    if (index == 0 || index == 1) {
        return index == 0 ? 0 : 1;
    } else {
        return fibonacci_recursive(index - 1) + fibonacci_recursive(index - 2);
    }
}

int main() {

    for (int i = 0; i < 10; i++) {
        cout << fibonacci_recursive(i) << "\t";
    }
}

