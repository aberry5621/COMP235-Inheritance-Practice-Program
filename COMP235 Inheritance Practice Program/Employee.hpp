//
//  Employee.hpp
//  COMP235 Inheritance Practice Program
//
//  Created by gb_man on 4/4/17.
//  Copyright © 2017 alex. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <string>
using std::string;

class Employee {

public:
    Employee();
    Employee(const string& theName, const string& theSsn);
    string getName() const;
    string getSsn() const;
    double getNetPay() const;
    void setName(const string& newName);
    void setSsn(const string& newSsn);
    void setNetPay(double newNetPay);
    void printCheck() const;
private:
    string name;
    string ssn;
    double netPay;
};

#endif /* Employee_hpp */
