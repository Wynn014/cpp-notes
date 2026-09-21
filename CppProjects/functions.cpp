#include <iostream>
 void Class_1(){
        Class_2();
    std::cout<<"This is the section of Class 3";
    }
 void Class_2(){
    std::cout<<"This is the section of Class 2";
    Class_1();
 }
int main (){
    std::string name = "Wyn";

    return 0;
}
