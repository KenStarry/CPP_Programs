//
// Created by kenne on 2/20/2023.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {

    //  initializing a vector
    vector<int> nums {1, 2, 3, 4, 5, 6, 7};

    //  resize the vector
    nums.resize(4);

    //  using a for loop
    cout << "For Loop : " << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums.at(i) << "\t";
    }

    cout << "Size : " << nums.size() << endl;
    cout << "Capacity : " << nums.capacity() << endl;

    nums.resize(20);

    cout << "Size : " << nums.size() << endl;
    cout << "Capacity : " << nums.capacity() << endl;

    //  using for each loop
    cout << endl << "Range based : " << endl;
    for (int x : nums) {
        cout << x << "\t";
    }

    return 0;
}

