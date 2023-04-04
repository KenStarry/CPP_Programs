//
// Created by kenne on 4/3/2023.
//
#include <iostream>

using namespace std;

template <typename P>
P maximum(P x, P y, P z) {

    P max = x;

    if (y > x && y > z) {
        max = y;
    } else if (z > x && z > y) {
        max = z;
    }

    return max;
}

template <typename P>
P minimum(P x, P y, P z) {

    P min = x;

    if (y < x && y < z) {
        min = y;
    } else if (z < x && z < y) {
        min = z;
    }

    return min;
}

int main() {

    cout << "Max of 16, 23, 8 = " << maximum(16, 23, 8) << endl;
    cout << "Min of 16, 23, 8 = " << minimum(16, 23, 8) << endl;
    cout << "Max of 5.5, 5.6, 3.4 = " << maximum(5.5, 5.6, 3.4) << endl;
    cout << "Min of 5.5, 5.6, 3.4 = " << minimum(5.5, 5.6, 3.4);
}
