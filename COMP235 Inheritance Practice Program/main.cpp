//
//  main.cpp
//  COMP235 Inheritance Practice Program
//
//  Created by gb_man on 4/4/17.
//  Copyright © 2017 alex. All rights reserved.
//

#include <iostream>
#include "Employee.hpp"
#include "HourlyEmployee.hpp"
#include "Administrator.hpp"

int main(int argc, const char * argv[]) {

    std::cout << "Employee Madness!\n";
    
    Employee new_hire;
    
    std::cout << new_hire.getName() << std::endl;
    
    // new_hire.printCheck();
    
    HourlyEmployee staffer;
    staffer.setName("Jim");
    std::cout << staffer.getName();
    std::cout << std::endl;
    
    Administrator anAdminWhatever;
    
    anAdminWhatever.setName("Max Power");
    anAdminWhatever.setSalary(83206.56);
    anAdminWhatever.setSsn("555-55-5555");
    anAdminWhatever.setSupervisor("Montgomery Burns");
    std::cout << anAdminWhatever.getName();
    
    anAdminWhatever.setAdminData();
    
    std::cout << anAdminWhatever.getName();
    
    std::cout << std::endl;
    anAdminWhatever.printCheck();
    
    std::cout << "Print Admin Data!\n";
    std::cout << std::endl;
    anAdminWhatever.printAdminData();
    std::cout << std::endl;

    
    return 0;
}
