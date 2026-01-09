// Complete Guide to C++ Programming Foundations
// Exercise 04_02
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    int a = 37;
    int *ptr;

    ptr = &a; //ptr now points to a

    std::cout << "             The value of a is " << a << std::endl;
    std::cout << "    ptr is pointing to address " << ptr << std::endl; //prints addy of a
    std::cout << "           The address of a is " << &a << std::endl; //& - 'address of' operator, also prints addy of a
    std::cout << "Where ptr is pointing, we have " << *ptr << std::endl; //contents of mem address ptr points to (will print val. of a - 37 ). prints int as ptr intialised as pntr to int
    std::cout << "         The address of ptr is " << &ptr << std::endl; //addy of ptr as a variable
    
    std::cout << std::endl << std::endl;
    return 0;
}
