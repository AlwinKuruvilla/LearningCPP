//
// Created by alwin on 3/3/2022.
//
// Arrays are a collection of data that is homogeneous (same type), fixed in size, and contiguous in memory.

#include <iostream>

using namespace std;

//#define AGE_LENGTH 4
const int AGE_LENGTH = 4;

int age[AGE_LENGTH]; // The creates an array that is a size of 4.
float temperature[] = {31.5, 32.7, 38.9};

int main3() {
    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;

    cout << "The Age array has " << AGE_LENGTH << " elements" << endl;
    cout << "Age[0]:" << age[0]<< endl;
    cout << "Age[1]:" << age[1]<< endl;
    cout << "Age[2]:" << age[2]<< endl;
    cout << "Age[3]:" << age[3]<< endl;

    cout << "Temperature[0]:" << temperature[0]<< endl;
    cout << "Temperature[1]:" << temperature[1]<< endl;
    cout << "Temperature[2]:" << temperature[2]<< endl;
    return 0;
}
