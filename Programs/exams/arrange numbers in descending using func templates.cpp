//
// Created by kenne on 4/3/2023.
//
#include <iostream>
#include <array>
using namespace std;

template <typename T>
array<T, 5> ascending_order(array<T, 5> nums) {

    array<T, 5> elements {};

    for (int i = 0; i < nums.size(); i++) {
        //  loop to check descending
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] > nums[j]) {

                T temp = nums.at(i);
                nums.at(i) = nums.at(j);
                nums.at(j) = temp;

                elements.at(i) = nums.at(j);
            } else {
                elements.at(i) = nums.at(i);
            }
        }
    }

    return elements;
}

int main() {

    array<float, 5> numbers {33, 12, 15, 48, 9};

    for (int i = 0; i < 5; i++) {
        cout << ascending_order(numbers).at(i) << "\t";
    }

}


























