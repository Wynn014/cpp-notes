#include <iostream> 
int main(){
    int ClassCode;
    double declaredvalue;
    std::cout << "\n Automated Cargo Customs & Duty Assessor \n";
    std::cout << " [1] - Electronics \n";
    std::cout << " [2] - Apparel \n";
    std::cout << " [3] - Perishables \n";
    std::cout << "\n Select: ";
    std::cin >> ClassCode;

      std::cout << "Please enter your value: ";
      std::cin >> declaredvalue;

      double baseDuty = declaredvalue * 0.10;
      double totalDuty = baseDuty;

    
    switch (ClassCode){
        case 1:
        double baseDuty = declaredvalue * 0.10;
        double totalDuty = baseDuty;
        if (declaredvalue > 10000){
            totalDuty = totalDuty + (declaredvalue * 0.05);
            declaredvalue = declaredvalue * 1.05;
            std::cout << "\n Commercial Type\n";
            int type;
            std::cout << " [1] - Commercial\n";
            std::cout << " [2] - Personal\n";
            std::cout << " Enter Type: ";
            std::cin >> type;
            if (type == 1){
                declaredvalue = declaredvalue + 200;
                std::cout << "Total: " << declaredvalue << std::endl;
                break;
            }
            else if (type == 2){
                std::cout << "You're fee is waived\n";
                std::cout << "Total: " << declaredvalue << std::endl;
                break;
            }
            else {
                std::cout << "Invalid Choice";
                break;
            }
        }
        break;
        case 2: 
        std::cout << "wowie";
        break;
        case 3:
        std::cout << "huwaww";
        break;
        default:
        std::cout << "Invalid choice";
        break;
    }

    return 0;
}