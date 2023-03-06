//
// Created by kenne on 2/20/2023.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<float> nums;
    nums.resize(10);

    for (int i = 0; i < 5; i++) {

        cout << "Enter a number : ";
        cin >> nums[i];
    }

    cout << "Before insertion : " << endl;
    for (float i: nums) {
        cout << i << "\t";
    }

    nums.insert(nums.begin(), 23);

    return 0;
}