//
// Created by kenne on 4/2/2023.
//
#include <iostream>

using namespace std;

//  a function that swaps two numbers in memory
template <typename P>
void swap_nums(P *num1, P *num2) {
    P temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {

    int a, b;

    cout << "Enter num1 :";
    cin >> a;

    cout << "Enter num2 :";
    cin >> b;

    cout << endl << "Initial values\n" << "a = " << a << ", b = " << b << endl;

    swap_nums(&a, &b);

    cout << endl << "Final values\n" << "a = " << a << ", b = " << b;

    return 0;
}
























