// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float target_x;
    int32_t sprite_x;
    uint32_t player_x;

    target_x = -123.45; //double due to no trailing f
    sprite_x = target_x; //when you assign float/double to int, var gets truncated (implicit casting done for us), expect -123
    player_x = sprite_x; // 32bit vers of the two's compliment of -123 as negative no. was assigned to an unsigned var - results in diff value

    std::cout << "Target X (float): " << target_x << std::endl; //prints -123.45
    std::cout << "Sprite X (int32_t): " << sprite_x << std::endl; //prints -123
    std::cout << "Player X (uint32_t): " << player_x << std::endl; //prints 4294967173
    /* an UNsigned vers of 123's two's compliment (which means most significant bit is 1), results in a biiiig no. (cuz the first bit in 2'sC is negative but unsigned means we can't know that) */

    std::cout << "Player X (uint32_t): " << static_cast<int32_t>(player_x) << std::endl;
    //explicitly casting the var to a signed 32 bit int, prints -123!!
    std::cout << std::endl << std::endl;
    return 0;
}
