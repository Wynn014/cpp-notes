#include <iostream>

 namespace first{
  int x = 2;
 }
 namespace second{
  int x = 3;
 }
  namespace first{
  int y = 3;
 }
 namespace second{
  int y = 4;
 }

int main(){
   int x = 0;
   const char grade = 'C';
   const double day = 67.8;
   std::string month = "febuary";


   std::cout << first::x << ", " << second::x << ", " << first::y << " and especially " << second::y << '\n';
   std::cout << " my grade is " << grade << " and today is the " << day << "th day and it's already " << month << std::endl;

    return 0;
}