// Complete Guide to C++ Programming Foundations
// Exercise 03_04
// Increment and Decrement Operators, by Eduardo Corpeño 

#include <iostream>

int main(){
    int player_score = 10;
    int player_lives = 3;

    std::cout << "Initial Score: " << player_score << std::endl;
    std::cout << "Initial Lives: " << player_lives << std::endl;

    // Postfix increment
    std::cout << "Score using postfix increment: " << player_score++ << std::endl; //still prints 10
//10 increments to 11
    // Prefix increment
    std::cout << "Score using prefix increment: " << ++player_score << std::endl; //11 increments to 12 then prints

    // Postfix decrement
    std::cout << "Lives using postfix decrement: " << player_lives-- << std::endl; //still prints 3
// 3 gets decremented to 2
    // Prefix decrement
    std::cout << "Lives using prefix decrement: " << --player_lives << std::endl; //2 gets decremented to 1 then prints

    std::cout << std::endl << std::endl;
    return 0;
}