// Complete Guide to C++ Programming Foundations
// Exercise 04_03
// How Arrays and Pointers are Related, by Eduardo Corpeño 

#include <iostream>

int main(){
    int highScores[] = {850, 745, 1220, 990};  // High scores in various game stages
    int* scorePtr = highScores;   // Pointer initialized to the address of the array

    int x = *scorePtr; //uses * operator to fetch data at address, ptr val = address of first val
    std::cout << x << std::endl; //prints 850
    std::cout << "Initial high score: " << *scorePtr << std::endl;  // Display the first high score using pointer

    std::cout << "Second high score using pointer: " << *(scorePtr + 1) << std::endl;
    /* dereference ptr value plus one - doesn't modify pointer but * finds the data at address of pointerval + 1 (next val in array) 
    like using an offset, if you don't mind changing the pointer then you could increment it */

    std::cout << "Third high score using array notation: " << scorePtr[2] << std::endl;
/* using pointer like an array to iterate thru
the [] operator adds the address in pointer with offset inside brackets according to size of data, then dereferences address - basically does the method before but for you */
    std::cout << std::endl << std::endl;
    return 0;
}
