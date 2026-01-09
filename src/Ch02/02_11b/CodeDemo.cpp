// Complete Guide to C++ Programming Foundations
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;

    celsius = fahrenheit;
    celsius = (5 / 9) * (fahrenheit - 32); //results in 0 celcius
    /* (5/9) is a const expr, which compiler does instead of processor 
    since both operands are int constants, the operator is doing int division & returning the quotient (nearest whole no. rounded down) which is 0 ...............
    TWO OPTIONS! explicitly cast, or just enter as a float/double by saying 5.0 or 9.0f*/

    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl; //prints 100
    std::cout << "Celsius   : " << celsius << std::endl; //prints 100

    float weight = 10.99;
    
    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl; //prints 10.99
    std::cout << "Integer part   : " << weight << std::endl; //prints 10.99
    std::cout << "Fractional part: " << weight << std::endl; //prints 10.99

    std::cout << std::endl << std::endl;
    return 0;
}
