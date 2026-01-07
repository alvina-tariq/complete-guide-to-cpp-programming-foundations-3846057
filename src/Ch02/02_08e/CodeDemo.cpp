// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
/*class keyword allows you to reuse enum names 
bc requires scope resolution operator to refer to enum class members*/
enum class asset_type {texture, sound, animation, script}; //global vars
enum class menu_section {background, music, sound, controls, texture};

int main(){
    int sound = 8;
    asset_type asset_value; //shows 8, because sound is another local variable in main's scope
//^asset_type instead of type int so that (int) casting isn't required in the next line
    asset_value = asset_type::sound; //asset_type:: added to sound

    std::cout << "asset_value = " << (int) asset_value << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
