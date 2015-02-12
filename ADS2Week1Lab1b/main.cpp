//
//  main.cpp
//  ADS2Week1Lab1b
//
//  Created by david swift on 11/02/2015.
//  Copyright (c) 2015 david swift. All rights reserved.
//

#include <iostream>
#include "Person.h"
#include "Employee.h"
#include "Customer.h"

int main(int argc, const char * argv[]) {
    
    Person *personPtr = new Person("johnny");
    personPtr->printName();
    
    personPtr = new Employee("Graham", 34000.00);
    personPtr->printName();
    
    personPtr = new Customer("charles", "I'd like to make a compliant");
    personPtr->printName();
    return 0;
}
