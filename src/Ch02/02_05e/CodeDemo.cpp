// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5; //same indentation lvl as main indicates global vars

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl; //ouputs 0
    my_flag = true;
    std::cout << "flag = " << my_flag << std::endl; //outputs 1 
    std::cout << "a + b = " << a + b << std::endl; //12
    std::cout << "b - a = " << b - a << std::endl; //-2
    unsigned int positive;
    positive = b - a; //does b-a but assigns to unsigned int
    std::cout << "b - a (unsigned) = " << positive << std::endl; //two's complement representation of answer

    std::cout << std::endl << std::endl;
    return 0;
}
