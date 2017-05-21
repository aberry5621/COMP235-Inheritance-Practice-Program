//
//  Administrator.hpp
//  COMP235 Inheritance Practice Program
//
//  Created by gb_man on 4/4/17.
//  Copyright © 2017 alex. All rights reserved.
//
/**
 Administrator Class
 
 X derived from Salaried Employee
 ? change private to protected
 
 supply additonal data and function members:
 • member variable string contains administrators title
 • member var string contains area of responsibility
 • member var string contains supervisor name
 • protencted member var double contains administrator annual salary
 • member function setSupervisor changes supervisor name
 • member function reads in admin's data from keyboard
 • member function print outputs object data to screen
 • overloading member printcheck with appropriate notations
 
 
 **/

#ifndef Administrator_hpp
#define Administrator_hpp

#include <stdio.h>
#include <string>
#include "SalariedEmployee.hpp"

class Administrator : public SalariedEmployee {
    
public:
    Administrator();
    Administrator(const string& theTitle, const string& areaResponsible, const string& immedSuper);
    // member function setSupervisor changes supervisor name
    void setSupervisor(string theSuperName);
    // member function reads in admin's data from keyboard
    void setAdminData();
    // member function print outputs object data to screen
    void printAdminData();
    void printCheck();
    
private:
    string adminTitle;
    string areaResponsible;
    string immediateSupervisor;
};

#endif /* Administrator_hpp */
