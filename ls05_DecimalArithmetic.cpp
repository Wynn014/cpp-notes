#include <iostream>

int main() {
    double sales = 95000;
    
    const double stateTaxRate = 0.054;
    const double countyTaxRate = 0.022;

    double stateTax = sales * stateTaxRate;
    double countyTax = sales * countyTaxRate;
    double totaltax = stateTax + countyTax;

   std::cout << "Sales: $" << sales << std::endl;
   std::cout << "StateTax: $" << stateTax << std::endl;
   std::cout << "County Tax: $" << countyTax << std::endl;
   std::cout << "Total Tax: $" << totaltax << std::endl;

 return 0;
}