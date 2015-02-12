//
//  Person.cpp
//  ADS2Week1Lab1b
//
//  Created by david swift on 11/02/2015.
//  Copyright (c) 2015 david swift. All rights reserved.
//

#include "Person.h"
#include <iostream>

Person::Person(std::string name) : name(name){}

void Person::printName(){
    std::cout << "Name: " << name << std::endl;
}