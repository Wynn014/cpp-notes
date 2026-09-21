#include <iostream>

int main(){

 std::string name;
 std::string gender;
 while(name.empty()){
    std::cout << "enter your name: ";
    std::getline(std::cin, name);
    std::cout << "enter your gender: ";
    std::cin >> gender;

    if (gender == "Male" || gender == "male" || gender == "M" || gender == "m"){
        gender = "Sir";
    }
    else if (gender == "Female" || gender == "female" || gender == "F" || gender == "f"){
        gender = "Ma'am";
    }
    std::cout << "Thank you " << gender << " " << name << std::endl;
 }
    return 0;
}

