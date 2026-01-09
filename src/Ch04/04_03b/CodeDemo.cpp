// Complete Guide to C++ Programming Foundations
// Exercise 04_03
// How Arrays and Pointers are Related, by Eduardo Corpeño 

#include <iostream>

int main(){
    int highScores[] = {850, 745, 1220, 990};  // High scores in various game stages
    int* scorePtr = highScores;   // Pointer initialized to the address of the array
    /* effectively holding the address of first ele, as arrays stored sequentially, so no need to specify w. & */
    /* ^equivalent to int* scorePtr = &highScores[0];
    method can be useful if initalising ptr to another elem in array */

    std::cout << "Initial high score: " << *scorePtr << std::endl;  // Display the first high score using pointer

    std::cout << std::endl << std::endl;
    return 0;
}
