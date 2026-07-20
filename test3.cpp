#include <iostream>
int main (){
    char value;
      std::string level;
    std::cout << "would you like to play? (Y/n): ";
    std::cin >> value;
    
    if (value == 'Y' || value == 'y'){
        std::cout << "pick level (easy, medium, hard): ";
        std::cin >> level;
        
        if (level == "easy"){
            std::cout << "level is easy" << std::endl;
        }
        else if(level == "medium"){
            std::cout << "level is medium" << std::endl;
        }
        else if(level == "hard"){
            std::cout << "level is hard" << std::endl;
        }
        else {
           std::cout << "invalid difficulty, please try again" << std::endl;
        }
        
    }
    else if(value == 'n' || value == 'N'){
        std::cout << "You may now leave\n";
    }
    else{
        std::cout << "try again" << '\n';
    }

    return 0;
}