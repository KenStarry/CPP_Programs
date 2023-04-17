//
// Created by kenne on 4/16/2023.
//
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool areConsecutive(int a, int b, int c) {

    if (a == b - 1 && b == c - 1) {
        return true;
    } else if (a == b - 1 && a == c + 1 || a == b + 1 && a == c - 1) {
        return true;
    } else if (b == a - 1 && b == c + 1 || b == a + 1 && b == c - 1) {
        return true;
    } else if (c == a - 1 && c == b + 1 || c == a + 1 && c == b - 1) {
        return true;
    } else {
        return false;
    }
}

int main() {

    srand(time(nullptr));

    int wheel1 = rand() % 10 + 1;
    int wheel2 = rand() % 10 + 1;;
    int wheel3 = rand() % 10 + 1;;
    int payout = 0;

    if (wheel1 == wheel2 && wheel1 == wheel3 && wheel2 == wheel3) {
        payout = 80;
    } else if (wheel1 == wheel2 || wheel1 == wheel3 || wheel2 == wheel3) {
        payout = 3;
    } else if (areConsecutive(wheel1, wheel2, wheel3)) {
        payout = 16;
    } else {
        payout = 0;
    }

    cout << wheel1 << "\t" << wheel2 << "\t" << wheel3 << "\t" << endl;
    cout << "\nPayout = " << payout << endl;

    return 0;
}
