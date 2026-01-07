// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream> //tells compiler to include code of the iostream headerfile
//main is the starting point of any c++ program
int main(){
    std::cout << "Hi There!" << std::endl;
//<< operator directs the string to the cout obj
//endl adds new line chara & flush output buffer (like pressing enter on terminal)
    std::cout << std::endl << std::endl;
    //creates 2 new line charas (a blank line)
    return 0; //ends func and indicates successful execution
}
/* used for comments
that span multiple
lines !!! */