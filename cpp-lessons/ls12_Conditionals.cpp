#include <iostream>
int main() {
  int age;
  std::cout << "enter your age: ";
  std::cin >> age;


  if(age >= 100){
    std::cout << "You are to old" << '\n';
  }
  else if(age >= 18){
    std::cout << "Welcome to the site" << '\n';
  }
  else if (age < 0){
    std::cout << "you have not been  born yet" << '\n';
  }
  else{
    std::cout << "You are not allowed to the site" << '\n';
  }

  return 0;

}