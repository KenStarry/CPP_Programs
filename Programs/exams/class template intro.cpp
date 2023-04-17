//
// Created by kenne on 4/15/2023.
//
#include <iostream>
using namespace std;

template <class T>
class Intro {

private:
    T num;

public:
    Intro(T n) : num(n) {}

    void addNumber(T myNum) {
        num += myNum;
    }

    T getNum() {
        return num;
    }
};

int main() {

    Intro<int> obj(38);

    obj.addNumber(67);

    cout << "New number : " << obj.getNum();
}







































