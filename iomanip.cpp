// Online C++ compiler to run C++ program online
#include <iostream>
#include <iomanip>

int main() {
    // Write C++ code here
    std::cout << std::setw(10) << 42 << std::endl;
    // Output: "        42"
    
    std::cout << std::setfill('*') << std::setw(10) << 42 << std::endl;
    // Output: "********42"
    
    double num = 3.1415926535;
    std::cout << std::setprecision(3) << num << std::endl;
    // Output: "3.14"
    std::cout << std::fixed << std::setprecision(3) << num << std::endl;
    // Output: "3.142"
    
    std::cout << std::setfill(' ') << std::left << std::setw(10) << "Hi" << "|" << std::endl;
    // Output: "Hi        |"
    std::cout << std::setfill(' ') << std::right << std::setw(10) << "Hi" << "|" << std::endl;
    // Output: "        Hi|"
    
    std::cout << std::showpoint << std::fixed << std::setprecision(0) << 42.0 << std::endl;
    // Output: "42."
    
    int n = 255;
    std::cout << std::hex << n << std::endl; // Output: "ff"
    std::cout << std::oct << n << std::endl; // Output: "377"
    std::cout << std::dec << n << std::endl; // Output: "255"
    std::cout << std::showbase << std::hex << 255 << std::endl; // Output: "0xff"
    std::cout << std::showbase << std::oct << 255 << std::endl; // Output: "0377"
    std::cout << std::hex << std::uppercase << 255 << std::endl; // Output: "FF"

    return 0;
}