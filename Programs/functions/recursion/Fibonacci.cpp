//
// Created by kenne on 1/24/2023.
//
#include <iostream>
using namespace std;

auto fibo(int index) {

    if ((index == 0) || (index == 1))
        return index;
    else
        return fibo(index - 1) + fibo(index - 2);

}

int main() {

    for (int i = 0; i < 10; i++) {
        cout << fibo(i) << "\t";
    }
}