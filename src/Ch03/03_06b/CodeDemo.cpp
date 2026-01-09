// Complete Guide to C++ Programming Foundations
// Exercise 03_06
// Preprocessor Directives, by Eduardo Corpeño 

#include <iostream> //preprocessor looks for file in predefined location 
/* including known std libs or installed ones means files don't require .h ext. */
#include <cstdint> 
/* cstdint a C++ vers of a C headerfile tht provides fixed size defs for int types so u don't have to rely on primitive types */

int main(){
    //these var types are coming from cstdint, for portability across architectures
    int32_t ammo = 100;
    uint8_t health_items = 5;

    ammo += 200; // Player finds extra ammo
    health_items -= 2; // Player uses some health items

    std::cout << "Final Ammo: " << ammo << std::endl;
    std::cout << "Remaining Health Items: " << (int) health_items << std::endl; 

    std::cout << std::endl << std::endl;
    return 0;
}
