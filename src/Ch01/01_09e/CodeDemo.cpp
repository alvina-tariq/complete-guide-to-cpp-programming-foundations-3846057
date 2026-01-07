// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "Enter your name: " << std::flush; //allows user input to appear in same line as output
    std::cin >> name; //user input is assigned to name, cin only works for single words
    std::cout << "Nice to meet you, " << name << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}