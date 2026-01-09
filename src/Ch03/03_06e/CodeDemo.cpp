// Complete Guide to C++ Programming Foundations
// Exercise 03_06
// Preprocessor Directives, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

/* #define is a directive tht defines symbol to be whatever you specify after - these symbols e.g. MAX_AMMO are macros */
#define MAX_AMMO 500
//#define DEBUG

int main(){
    int32_t ammo = MAX_AMMO / 5; //value ends up being calc.ed by preprocessor bc constant
    uint8_t health_items = 5;

#ifdef DEBUG //if DEBUG defined, then this code is included in final implementation
    std::cout << "[DEBUG] Starting game simulation..." << std::endl;
    //^this line is included as DEBUG is defined in line 10 
    //(will be greyed out if we comment out line 10)
#endif

    ammo += 200; // Player finds extra ammo
    health_items -= 2; // Player uses some health items

    std::cout << "Final Ammo: " << ammo << std::endl;
    std::cout << "Remaining Health Items: " << (int) health_items << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
