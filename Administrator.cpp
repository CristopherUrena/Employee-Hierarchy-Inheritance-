/* Implement Administrator class */
#include "Administrator.h"
#include<iomanip>
#include <iostream>

// implementation of the default constructor, remember to call base class

Administrator::Administrator() : SalariedEmployee(), jobTitle(""), bonus(0) 
{
}

//implementation of the constructor, remember to call base class constructor
Administrator::Administrator(const std::string& name, const std::string& SSN, double salary,
                             const std::string& jobTitle, double bonus)
    : SalariedEmployee(name, SSN, salary), jobTitle(jobTitle), bonus(bonus) {
    // Constructor body intentionally left empty

   
}

// implementation of accessor/mutators
const string& Administrator::getJobTitle() const 
{
    return jobTitle;
}

double Administrator::getBonus() const 
{
    return bonus;
}

void Administrator::setJobTitle(const string& jobTitle) 
{
    this->jobTitle = jobTitle;
}

void Administrator::setBonus(double bonus) 
{
    this->bonus = bonus;
}

double Administrator::get_net_pay() const 
{
    return get_salary() + bonus;
}

// implement the print_check() function.
void Administrator::print_check() const 
{
   
    std::cout <<endl;
    std::cout << "_______________________________________________\n";
    std::cout << "Pay to the order of " << get_name() << "\n";
    std::cout << "The sum of "  << get_net_pay() << " Dollars\n";
    std::cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __\n";
    std::cout << "Employee Number: " << get_ssn() << "\n";
    std::cout << "Salaried Employee. Regular Pay: " << get_salary() << "\n";
    std::cout << "_________________________________________________\n";
    std::cout << "Administrator Title: " << jobTitle << "\n";
    std::cout << "Bonus: " << bonus << " Pay: " << get_net_pay() << "\n";
    std::cout << "_________________________________________________\n";



}



//implementation of  the promptInput() function.
istream& Administrator::promptInput(istream& in, ostream& out) 
{
    
    SalariedEmployee::promptInput(in, out);
   
    out << "Enter bonus and title: ";
    in >> bonus;
    
    ignorespace(in);

    // reads the rest of the line for the title
    getline(in, jobTitle);

    return in;

}
