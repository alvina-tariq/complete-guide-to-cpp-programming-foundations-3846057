// Complete Guide to C++ Programming Foundations
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;

    //explicit casting vs just entering as double to prevent const int reading & int division happening
    celsius = (static_cast<float>(5) / 9.0) * (fahrenheit - 32);

    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;

    float weight = 10.99;
    
    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl; //10.99
    std::cout << "Integer part   : " << static_cast<int>(weight) << std::endl; //static cast to int truncates - 10
    std::cout << "Fractional part: " << (int)((weight - (int)weight) * 10000) << std::endl; /*getting rid of integer part so you only get the 0.99, 10000 for 4 places, then casted to int to show 9899 (floats are approximations, won't be as exact as double */

    std::cout << std::endl << std::endl;
    return 0;
}
