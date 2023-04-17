//
// Created by kenne on 4/15/2023.
//
#include <iostream>
#include <array>
using namespace std;

//  function to find perfect number
template <typename T>
array<T, 4> perfectNumber(T maxRange) {
    array<T, 4> perfectList;

    int count = 0;
    for (int i = 0; i < maxRange; i++) {

        T total = 1;
        T j = 2;

        while (j * j <= i) {
            if (i % j == 0) {
                total = total + j + i / j;
            }
            j++;
        }

        if (total == i && total != 1) {
            //  append perfect number to array
            perfectList.at(count) = i;
            count += 1;
        }
    }

    return perfectList;
}

int main() {

    array<int, 4> perfectNums = perfectNumber(10000);

    for (int i = 0; i < perfectNums.size(); i++) {
        cout << perfectNums.at(i) << "\t";
    }

    return 0;
}