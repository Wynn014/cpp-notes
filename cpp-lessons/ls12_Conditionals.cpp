#include <iostream>
int main() {
  int age;
  std::cout << "enter your age: ";
  std::cin >> age;

  if(age >= 100){
    std::cout << "to old\n";
  }
  else if(age >= 18){
     std::cout << "welcome to the site\n";
  }
  else if(age < 0){
    std::cout << "not born\n";
  }
  else{
    std::cout << "Cannot enter site\n";
  }

  return 0;

}