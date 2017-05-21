//
//  Administrator.cpp
//  COMP235 Inheritance Practice Program
//
//  Created by gb_man on 4/4/17.
//  Copyright © 2017 alex. All rights reserved.
//

#include <string>
#include <iostream>
#include <iomanip>
#include "Employee.hpp"
#include "SalariedEmployee.hpp"
#include "Administrator.hpp"
using std::string;
using std::fixed;
using std::setprecision;
using std::cout;
using std::cin;
using std::endl;


// default contstructor
Administrator::Administrator() {}

// param contstructor
Administrator::Administrator(const string& theTitle, const string& areaResponsible, const string& immedSuper) : SalariedEmployee()
{
    // blank for now
}

// member function setSupervisor changes supervisor name
void Administrator::setSupervisor(string theSuperName) {
    immediateSupervisor = theSuperName;
    cout << "Supervisor changed to: " << immediateSupervisor << endl;
}

// member function reads in admin's data from keyboard
void Administrator::setAdminData() {
    
    cout << "\nSetAdminData Method Invoked\n";
    
    cout << "\nEnter Admin Name: \n";
    string tmpName;
    getline(cin, tmpName);
    Employee::setName(tmpName);
    
    cout << "\nEnter Admin SSN: \n";
    string tmpSsn;
    getline(cin, tmpSsn);
    Employee::setSsn(tmpSsn);
    
    cout << "\nEnter Admin Title: \n";
    string tmpTitle;
    getline(cin, tmpTitle);
    adminTitle = tmpTitle;
    
    cout << "\nEnter Admin Area of Responsibility: \n";
    string tmpAreaResponsible;
    getline(cin, tmpAreaResponsible);
    areaResponsible = tmpAreaResponsible;
    
    cout << "\nEnter Admin Immediate Supervisor: \n";
    string tmpImmediateSupervisor;
    getline(cin, tmpImmediateSupervisor);
    immediateSupervisor = tmpImmediateSupervisor;
    
    cout << "\nEnter Admin Salary: \n";
    double tmpSalary;
    cin >> tmpSalary;
    SalariedEmployee::setSalary(tmpSalary);
    
}

// member function print outputs object data to screen
void Administrator::printAdminData() {
    cout << "Admin Name: " << Employee::getName() << " \n";
    cout << "Admin SSN: " << Employee::getSsn() << " \n";
    cout << "Admin Title: " << adminTitle << " \n";
    cout << "Admin Area of Responsibility: " << areaResponsible << " \n";
    cout << "Admin Immediate Supervisor: " << immediateSupervisor << " \n";
    cout << "Admin Salary: $" << SalariedEmployee::getSalary() << " \n";
}

void Administrator::printCheck() {
    
    setNetPay(salary);
    cout << "\n_______________________________________________________\n";
    cout << "Pay to the order of: " << getName() << endl;
    cout << "The sum of: $" << fixed << setprecision(2) << getNetPay() << endl;
    cout << "EMPLOYEE NUMBER: " << getSsn() << endl;
    cout << "\n_______________________________________________________\n";
    
}

