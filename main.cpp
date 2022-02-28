#include <iostream>
#include <string>

int a, b = 5; // Global variables. Managed statically by the compiler. Allocated in the data segment of memory and freed only when the program ends.

int main() {
    std::string myStr; // Local (automatic) variable. Allocated in the stack segment of memory and freed when the function terminates.
    std::cout << "What is your name?" << std::endl;
    std::cin >> myStr;
    std::cout << "Your name is: " + myStr << std::endl;
    return 0;
}
