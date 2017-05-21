//
//  SalariedEmployee.hpp
//  COMP235 Inheritance Practice Program
//
//  Created by gb_man on 4/4/17.
//  Copyright © 2017 alex. All rights reserved.
//

#ifndef SalariedEmployee_hpp
#define SalariedEmployee_hpp

#include <string>
#include "Employee.hpp"

using std::string;

class SalariedEmployee : public Employee {
    
public:
    SalariedEmployee();
    SalariedEmployee(const string& theName, const string& theSsn, double theWeeklySalary);
    double getSalary() const;
    void setSalary(double newSalary);
    void printCheck();
protected:
    double salary;
};


#endif /* SalariedEmployee_hpp */
