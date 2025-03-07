/* This is the header file for Administrator class */
/*  1. a string type member variable to store the jobTitle (director, Vice President, ... )
 *  3. Constructor functions: one default one, another taking necessary info. about the administrator: name, SSN, salary, jobTitle
 *  4. redefine print_check() so that the jobTitle is printed on the check. Start with the version from 
 *  SalariedEmployee
 */
#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "SalariedEmployee.h"

class Administrator:public SalariedEmployee
{
  public:
    //declaration of  default constructor for Administrator
     Administrator();

    // declaration of  constructor for Administrator that takes a name, SSN, salary, jobTitle, bonus
     Administrator(const std::string& name, const std::string& SSN, double salary, const std::string& jobTitle, double bonus);

    // declaration of  Accessor/Mutator functions
    const std::string& getJobTitle() const;
    double getBonus() const;

    void setJobTitle(const std::string& jobTitle);
    void setBonus(double bonus);

    //declaration of virtual functions to override
    void print_check() const override;
    std::istream& promptInput(std::istream& in, std::ostream& out) override;
    double get_net_pay() const override;


  private: 
    // declare jobTitle, bonus member variables
    std::string jobTitle;
    double bonus; 

};

#endif
