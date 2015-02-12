//
//  Customer.cpp
//  ADS2Week1Lab1b
//
//  Created by david swift on 12/02/2015.
//  Copyright (c) 2015 david swift. All rights reserved.
//

#include "Customer.h"
#include <iostream>

Customer::Customer(std::string name, std::string compliant) : compliant(compliant), Person(name){}

void Customer::printName() {
    Person::printName();
    std::cout << "Compliant: " << compliant << std::endl;
}
