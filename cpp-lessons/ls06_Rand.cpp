#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
   const short minValue = 1;
   const short maxValue = 6;

   srand(time(0));
 short first  = (rand() % 6) + 1;
 short second = (rand() % 6) + 1;
 short third  = (rand() % 6) + 1;
   cout << first << " , " << second << " , " << third << endl;
   return 0;
}