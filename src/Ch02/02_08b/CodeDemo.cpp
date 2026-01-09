// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
// enums in c++ a list of named int constants
//these enums categorise these assets
//this is a C-style enumeration, c++ usually uses enum classes for type safety
enum asset_type {texture, sound, animation, script};

int main(){
    //int sound = 8; would mean print 8 instead of 1, asset_value = sound assigned to 8
    // functions will always assume you mean the var in it's scope
    //scope resolution operator (::) solves, but enums don't have them as global, enum CLASSES do
    int asset_value;

    asset_value = sound; //prints 1, the encoding for 1

    std::cout << "asset_value = " << asset_value << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
