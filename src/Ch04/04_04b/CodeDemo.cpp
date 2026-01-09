// Complete Guide to C++ Programming Foundations
// Exercise 04_04
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <chrono> //classes to keep track of time

// Type aliases for chrono classes
using Clock = std::chrono::system_clock;
using TimePoint = std::chrono::time_point<Clock>; //using templates
using Duration = std::chrono::duration<double>;

int main(){
    TimePoint start, end; //declare 2 objs of timept class
    Duration elapsed_seconds;
    std::string input;

    start = Clock::now(); //assign current time to start obj
// use :: instead of . bc static member function, shared throughout the class
    std::cout << "Type 'start' as quickly as you can and hit ENTER: " << std::flush; //flush makes message visible whilst pausing exec. till user input below
    std::cin >> input;

    end = Clock::now();
    elapsed_seconds = end - start;

    std::cout << "Reaction time: " << elapsed_seconds.count() << "s" << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
