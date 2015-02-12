//
//  Employee.cpp
//  ADS2Week1Lab1b
//
//  Created by david swift on 12/02/2015.
//  Copyright (c) 2015 david swift. All rights reserved.
//

#include "Employee.h"
#include <iostream>

Employee::Employee(std::string name, double salary) : salary(salary), Person(name){}

void Employee::printName() {
    Person::printName();
    std::cout << "Salary: " << salary << std::endl;
}
