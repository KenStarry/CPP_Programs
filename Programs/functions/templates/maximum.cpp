//
// Created by kenne on 1/24/2023.
//
#include <iostream>
using namespace std;

//  using one data type
template <typename T>
T maximum(T x, T y) {

    T max = x;

    if (y > x) {
        max = y;
    }

    return max;
}

//  using multiple data types
template <typename T, typename P>
P minimum(T x, P y, P z) {

    P min = x;

    if (y < x && y < z) {
        min = y;
    } else if (z < x && z < y) {
        min = z;
    }

    return min;
}

int main() {

    cout << minimum(5, 20.5, 8.7);
}











