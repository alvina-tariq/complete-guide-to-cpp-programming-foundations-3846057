// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class character_role {protagonist, antagonist, sidekick, npc}; //used to encode diff roles tht char can have

struct game_character{
    std::string name;
    int level;
    character_role role;
}; //members default to public in struct, but private in classes

int main(){
    game_character buddy;
    //buddy. becomes member access
    buddy.name = "Tony";
    buddy.level = 10;
    buddy.role = character_role::sidekick; /* still need to use enum class scope operator, 
     and since enums are encoding it will literally assign 2 */
    //printing role encoding, "Tony is a lvel 10 chr w role of 2" 
    std::cout << buddy.name << " is a level " << buddy.level << " character with the role of " << (int) buddy.role << "." << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
