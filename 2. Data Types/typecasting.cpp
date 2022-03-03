//
// Created by alwin on 3/3/2022.
//

#include <iostream>
#include <cstdint>

using namespace std;

float flt = -7.44f;
int32_t sgn;
uint32_t unsgn;

int main5 () {
    sgn = flt;
    unsgn = sgn;

    cout << "float: " << flt << endl;
    cout << "int32: " << sgn << endl;
    cout << "uint32: " << unsgn << endl;

    int fahrenheit = 100;
    int celsius;

    // celsius = (5/9) * (fahrenheit - 32);
    celsius = ((float)5/9.0) * (fahrenheit - 32);

    cout << endl;
    cout << "Fahrenheit: " << fahrenheit << endl;
    cout << "Celsius   : " << celsius << endl;

    double weight = 10.99;

    cout << endl;
    cout << "Float           : " << weight << endl;
    cout << "Interger part   : " << (int) weight << endl;
    cout << "Fractional part : " << (int) ((weight - (int) weight ) * 10000) << endl;

    return 0;
}