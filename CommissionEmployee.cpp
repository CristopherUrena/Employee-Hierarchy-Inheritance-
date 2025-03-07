#include "CommissionEmployee.h"

#include <string>
#include <iostream>
#include <iomanip>
//implementation of the default constructor
CommissionEmployee::CommissionEmployee() : Employee(), sales(0), commissionPercent(0) 
{
}
// implementation of the constructor
CommissionEmployee::CommissionEmployee(const std::string& name, const std::string& SSN, double sales, double commissionPercent):Employee(name, SSN), sales(sales), commissionPercent(commissionPercent) 

{
}



//implement accessor/mutators
double CommissionEmployee::getSales() const 
{
    return sales;
}

double CommissionEmployee::getCommissionPercent() const 
{
    return commissionPercent;
}

void CommissionEmployee::setSales(double sales) 
{
    this->sales = sales;
}

void CommissionEmployee::setCommissionPercent(double commissionPercent) 
{
    this->commissionPercent = commissionPercent;
}
//implements virtual get_net_pay function
double CommissionEmployee::get_net_pay() const 
{
    return (commissionPercent / 100) * sales;
}


//implements the virtual print_check() function. 
void CommissionEmployee::print_check() const 
{
   
    std::cout <<endl;
    std::cout << "_______________________________________________\n";
    std::cout << "Pay to the order of " << get_name() << "\n";
    std::cout << "The sum of " << /*std::fixed << //std::setprecision(2)*/ get_net_pay() << " Dollars\n";
    std::cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __\n";
    std::cout << "Employee Number: " << get_ssn() << "\n";
    std::cout << "Commission Employee.\n";
    std::cout << "Gross sales: " << sales << " Commission: " << commissionPercent << " Pay: " << get_net_pay() << "\n";
    std::cout << "_________________________________________________\n";


}

//implementation of the virtual promptInput() function.
std::istream& CommissionEmployee::promptInput(std::istream& in, std::ostream& out) 
{

    //implementation of the base class part
     Employee::promptInput(in, out);

    //reads the sales and commissionPercent
   out << "Enter sales and commission: ";
    in >> sales >> commissionPercent;

    return in;
 

}
