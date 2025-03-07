//#pragma once
#include <iostream>
#include "Employee.h"

#ifndef _COMMISSION_H
#define _COMMISSION_H

class CommissionEmployee : public Employee
{
public:
    //declaration of the default constructor for CommissionEmployee
    CommissionEmployee();

    //declaration of the constructor for CommissionEmployee that takes a name, SSN, sales, commissionPercent
    CommissionEmployee(const std::string& name, const std::string& ssn, double sales, double commissionPercent);


    //Accessor/Mutator functions
    double getSales() const;
    double getCommissionPercent() const;

    void setSales(double sales);
    void setCommissionPercent(double commissionPercent);


    // virtual functions to override

     void print_check() const override;
    std::istream& promptInput(std::istream& in, std::ostream& out) override;
    double get_net_pay() const override;

private:
    //declares a sales and commissionPercent member variables
     int sales;               
    double commissionPercent;
};
#endif // _COMMISSION_H

