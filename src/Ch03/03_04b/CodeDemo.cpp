// Complete Guide to C++ Programming Foundations
// Exercise 03_04
// Increment and Decrement Operators, by Eduardo Corpeño 

#include <iostream>

int main(){
    int player_score = 10;
    int player_lives = 3;

    std::cout << "Initial Score: " << player_score << std::endl;
    std::cout << "Initial Lives: " << player_lives << std::endl;

    // Postfix increment (x++)
    std::cout << "Score using postfix increment: " << player_score << std::endl;

    // Prefix increment (++x)
    std::cout << "Score using prefix increment: " << player_score << std::endl;

    // Postfix decrement (y--)
    std::cout << "Lives using postfix decrement: " << player_lives << std::endl;

    // Prefix decrement (--y)
    std::cout << "Lives using prefix decrement: " << player_lives << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}