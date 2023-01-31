//
// Created by kenne on 1/23/2023.
//
#include <iostream>
#include <string>
using namespace std;

//  template that adds two numbers
template <typename T>
inline T add_numbers(T num1, T num2) {
    return (num1 + num2);
}

int main() {

    auto result1 = add_numbers<int>(2, 4);
    auto result2 = add_numbers<string>("Ken", "Pookie");

    cout << result1;
    cout << result2;

    return 0;
}
