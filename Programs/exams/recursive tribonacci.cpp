//
// Created by kenne on 4/2/2023.
//
#include <iostream>

using namespace std;

int tribonacci_recursive(int index) {

    if (index == 0 || index == 1 || index == 2) {
        return index == 0 ? 0 : 1;

    }  else {
        return tribonacci_recursive(index - 1) +
               tribonacci_recursive(index - 2) +
               tribonacci_recursive(index - 3);
    }
}

void tribonacci(int n) {
    int first = 0;
    int second = 1;
    int third = 1;
    int next;

    cout << first << "\t" << second << "\t" << third;

    for (int i = 0; i < n; i++) {
        next = third + second + first;
        first = second;
        second = third;
        third = next;
        cout << "\t" << next;
    }

}

int main() {

    tribonacci(5);

    int tribo = tribonacci_recursive(3);

    cout << "Tribo = " << tribo;

    return 0;
}



















