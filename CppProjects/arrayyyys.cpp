#include <iostream>
using namespace std;
int main(){
    std::string name[4]={};

    name [0]="Blue";
    name [1]="Red";
    name [2]="Green";
    name [3]="Yellow";

    int indexnum;
    std::cout<< "enter index: ";
    std::cin>>indexnum;

    cout<<name[indexnum]<<endl;

    return 0;
}