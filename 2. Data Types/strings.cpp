//
// Created by alwin on 3/3/2022.
//

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

const int LENGTH1 = 25;

char array_str1[LENGTH1] = "Hey guys! ";
char array_str2[] = "What's up?";

string std_str1 = "Hi everybody! ";
string std_str2 = "How's it going?";

int main4() {
    strcat_s(array_str1, LENGTH1, array_str2);// This function is from the cstring library.
    cout << array_str1 << endl;

    cout << std_str1 + std_str2 << endl;

    return 0;
}