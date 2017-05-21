//
//  Employee.cpp
//  COMP235 Inheritance Practice Program
//
//  Created by gb_man on 4/4/17.
//  Copyright © 2017 alex. All rights reserved.
//

#include <string>
#include <cstdlib>
#include <iostream>

#include "Employee.hpp"
using std::string;
using std::cout;

Employee::Employee() : name("No Name, yet"), ssn("No SSN, yet"), netPay(0) {}

Employee::Employee(const string& theName, const string& theNumber) : name(theName), ssn(theNumber), netPay(0) {}

string Employee::getName() const { return name; }

string Employee::getSsn() const { return ssn; }

double Employee::getNetPay() const { return netPay; }

void Employee::setName(const string& newName) { name = newName; }

void Employee::setSsn(const string& newSsn) { ssn = newSsn; }

void Employee::setNetPay(double newNetPay) { netPay = newNetPay; }

void Employee::printCheck() const {
    cout << "\nERR: printCheck called for EMPLOYEE NOT DIFFERENTIATED\n";
    exit(1);
}

