// Complete Guide to C++ Programming Foundations
// Exercise 04_04
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <chrono>

// Type aliases for chrono classes
using Clock = std::chrono::system_clock;
using TimePoint = std::chrono::time_point<Clock>;
using Duration = std::chrono::duration<double>;
//now usng pointers to manage timepoints dynamically
int main(){
    TimePoint *start, *end; //declaration changed to pointers
    Duration *elapsed_seconds = new Duration(); //memory allocated dynamically at delcaration
    //done by creating the object using class constructor
    //returns pointer to allocated memory where obj located
    std::string input;

    start = new TimePoint(Clock::now()); //assign new objects to pointers

    std::cout << "Type 'start' as quickly as you can and hit ENTER: " << std::flush;
    std::cin >> input;

    end = new TimePoint(Clock::now());
    *elapsed_seconds = *end - *start; //because they are all pointers now, have to use *
    // subtracts the objects start & end point to and assigns result to object where elapsed_seconds pointer is pointing to

    std::cout << "Reaction time: " << elapsed_seconds->count() << "s" << std::endl;
//pointer doesn't have member func.s, so can't use .count
//can do (*elapsed_seconds).count() but is long
//use 'member of' operator, ->, so that the pointer can access Duration class member functions

//bc objs dynamically created, need to delete after using
    delete start;
    delete end;
    delete elapsed_seconds;

    std::cout << std::endl << std::endl;
    return 0;
}
