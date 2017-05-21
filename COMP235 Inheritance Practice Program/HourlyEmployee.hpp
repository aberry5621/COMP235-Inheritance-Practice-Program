//
//  HourlyEmployee.hpp
//  COMP235 Inheritance Practice Program
//
//  Created by gb_man on 4/4/17.
//  Copyright © 2017 alex. All rights reserved.
//

#ifndef HourlyEmployee_hpp
#define HourlyEmployee_hpp

#include <string>
#include "Employee.hpp"

using std::string;

class HourlyEmployee : public Employee {
    
public:
    HourlyEmployee();
    HourlyEmployee(const string& theName, const string& theSsn, double theWageRate, double theHours);
    void setRate(double newWageRate);
    double getRate() const;
    void setHours(double hoursWorked);
    double getHours() const;
    void printCheck();
private:
    double wageRate;
    double hours;
};

#endif /* HourlyEmployee_hpp */
