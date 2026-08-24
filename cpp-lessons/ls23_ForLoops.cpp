#include <iostream> 
int main (){

  std::string CorrectUsername = "Admin";
  std::string CorrectPassword = "Wyn";
  std::string password, username; 

  int attempts; 
  for (attempts = 1; attempts <=3; attempts++ ){
    std::cout << "Attempts: " << attempts << '\n';

  std::cout << "please enter your username: ";
  std::cin >> username;

  std::cout << "please enter your password: ";
  std::cin >> password;

  if (username == CorrectUsername && password == CorrectPassword)
  {
    std::cout << "Welcome User! \n";
  }
  }
  if (attempts >=3){
    std::cout << "invalid user" << std::endl;
  }
  return 0;
}