//
// Created by kenne on 4/4/2023.
//
#include <iostream>

using namespace std;
const int MAX = 3;

int main () {
    int  var[MAX] = {10, 100, 200};
    int *ptr = var;

    for (int i = 0; i < MAX; i++) {
        if (i == 2) {
            *(var + i) = 59;
        }
        cout << "Value at " << i << " = " << var[i] << ",Memory = " << var + i << endl;
//        ptr++;
    }

    return 0;
}
