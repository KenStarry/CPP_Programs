//
// Created by kenne on 4/16/2023.
//
#include <iostream>
#include <array>
#include <cmath>
using namespace std;

template<typename T, typename P>
void softmax(array<P, 5> arr) {

    T x = 0;
    P num = 0.0;
    P denom = 0.0;
    P n = 0.0;

    for (T i = 0; i < arr.size(); i++) {
        x = arr.at(i);

        num = exp(pow(x, i));
        denom += exp(pow(x, i));

        n = num / denom;
        cout << n << endl;
    }

}


int main() {

    array<double, 5> arr {6, 8, 2, 5, 3};

    //  call softmax
    softmax<int, double>(arr);

    for (int i : arr) {
        cout << i << " ";
    }

    return 0;
}
