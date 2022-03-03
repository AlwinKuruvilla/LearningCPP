//
// Created by alwin on 2/28/2022.
//

#include <iostream>
#include <string>
#include <cstdint>

#define CAPACITY 5000 // anytime the compiler finds the word CAPACITY, it will replace it with 5000.
#define DEBUG // When DEBUG is present, only then will the #ifdef block execute.
using namespace std;

int main2() {
    int amt = CAPACITY;
#ifdef DEBUG
    cout << "[I am debugging]" << endl;
#endif
    return 0;
}