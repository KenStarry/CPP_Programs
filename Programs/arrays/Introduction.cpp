//
// Created by kenne on 1/17/2023.
//
#include <iostream>
#include <array>
using namespace std;

int main() {

    //  template array - D
    array<int, 5> numbers = {5, 6, 7, 8, 10};

    //  template array 2D
    array<array<int, 3>, 2> data2DArray {5, 6, 7};

    //  normal array
    int data[5];

    //  using a for each loop
//    for (int x : numbers) {
//        cout << x << "\n";
//    }

    //  looping over a 2D array
    for (auto p : data2DArray) {
        for (int num : p) {
            cout << num << "\n";
        }
    }

    cout << "Length of array : " << data2DArray[0].size();

//    cout << numbers.size();

    return 0;
}
