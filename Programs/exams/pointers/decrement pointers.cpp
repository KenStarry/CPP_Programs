//
// Created by kenne on 4/4/2023.
//
#include <iostream>

using namespace std;

const int MAX = 3;

int main() {

    int arr[MAX] = {50, 100, 150};
    int *ptr = &arr[MAX - 1];

    for (int i = MAX - 1; i >= 0; i--) {

        cout << "Memory location of " << arr[i] << " = " << ptr << endl;
        ptr--;
    }
}
