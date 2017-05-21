//
//  HourlyEmployee.cpp
//  COMP235 Inheritance Practice Program
//
//  Created by gb_man on 4/4/17.
//  Copyright © 2017 alex. All rights reserved.
//

#include <string>
#include <iostream>
#include "HourlyEmployee.hpp"
using std::string;
using std::cout;
using std::endl;

HourlyEmployee::HourlyEmployee() : Employee(), wageRate(0), hours(0) {}

HourlyEmployee::HourlyEmployee(const string& theName, const string& theSsn, double theWageRate, double theHours) : Employee(theName, theSsn), wageRate(theWageRate), hours(theHours) {}

void HourlyEmployee::setRate(double newWageRate) {
    wageRate = newWageRate;
}

double HourlyEmployee::getRate() const {
    return wageRate;
}

void HourlyEmployee::setHours(double hoursWorked) {
    hours = hoursWorked;
}

double HourlyEmployee::getHours() const {
    return hours;
}

void HourlyEmployee::printCheck() {
    setNetPay(hours * wageRate);
    
    cout << "\n_______________________________________________________\n";
    cout << "Pay to the order of: " << getName() << endl;
    cout << "Teh sum of: " << getNetPay() << "Dollars" << endl;
    cout << "EMPLOYEE NUMBER: " << getSsn() << endl;
    cout << "HOURS WORKED: " << hours << endl;
    cout << "WAGE RATE: " << wageRate << endl;
    cout << "\n_______________________________________________________\n";
    
}
