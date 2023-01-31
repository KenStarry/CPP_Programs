//
// Created by kenne on 1/24/2023.
//
#include <iostream>

using namespace std;

int tribonacci(int index) {

    if ((index == 0) || (index == 1))
        return index;

    else if (index == 2)
        return 1;

    else
        return tribonacci(index - 1) + tribonacci(index - 2) + tribonacci(index - 3);
}

int tribo(int index){
    if (index == 0)
        return 10;
    else if(index == 1)
        return 11;
    else if(index == 2)
        return 12;
    else
        return tribo(index-1) + tribo(index-2) + tribo(index-3);
}

int main() {

    for (int i = 0; i < 10; i++) {
        cout << tribonacci(i) << "\t";
    }

    cout<<endl;

    for (int i = 0 ; i < 10 ; i ++){
        cout << tribo(i) << "\t";
    }
}