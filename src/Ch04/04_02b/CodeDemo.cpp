// Complete Guide to C++ Programming Foundations
// Exercise 04_02
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    int a = 37;
    int *ptr; //declaring pointer

    ptr = nullptr; //PLACEHOLDER assigning nullptr to ptr
/* nullptr a const of it's own type tht rep.s a null location in memory - indicates a ptr does not pt to any valid mem location */

//now change rest of code as if ptr assigned to a
    std::cout << "             The value of a is " << ptr << std::endl;
    std::cout << "    ptr is pointing to address " << ptr << std::endl;
    std::cout << "           The address of a is " << ptr << std::endl;
    std::cout << "Where ptr is pointing, we have " << ptr << std::endl;
    std::cout << "         The address of ptr is " << ptr << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
