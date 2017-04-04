//
//  SalariedEmployee.cpp
//  COMP235 Inheritance Practice Program
//
//  Created by gb_man on 4/4/17.
//  Copyright © 2017 alex. All rights reserved.
//

#include <string>
#include <iostream>
#include "SalariedEmployee.hpp"
using std::string;
using std::cout;
using std::endl;


SalariedEmployee::SalariedEmployee() : Employee(), salary(0) {}

SalariedEmployee::SalariedEmployee(const string& theName, const string& theSsn, double theWeeklyPay) : Employee(theName, theSsn), salary(theWeeklyPay) {}

double SalariedEmployee::getSalary() const {
    return salary;
}

void SalariedEmployee::setSalary(double newSalary) {
    salary = newSalary;
}

void SalariedEmployee::printCheck() {
    setNetPay(salary);
    cout << "\n_______________________________________________________\n";
    cout << "Pay to the order of: "<< getName() << endl;
    cout << "Teh sum of: "<< getNetPay() << "Dollars" << endl;
    cout << "EMPLOYEE NUMBER: "<< getSsn() << endl;
    cout << "\n_______________________________________________________\n";
}
