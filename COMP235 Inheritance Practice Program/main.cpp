//
//  main.cpp
//  COMP235 Inheritance Practice Program
//
//  Created by gb_man on 4/4/17.
//  Copyright © 2017 alex. All rights reserved.
//

#include <iostream>
#include "Employee.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Employee Madness!\n";
    
    Employee new_hire;
    
    std::cout << new_hire.getName() << std::endl;
    
    return 0;
}
