
//
//  Employee.h
//  ADS2Week1Lab1b
//
//  Created by david swift on 12/02/2015.
//  Copyright (c) 2015 david swift. All rights reserved.
//

#ifndef __ADS2Week1Lab1b__Employee__
#define __ADS2Week1Lab1b__Employee__

#include <stdio.h>
#include "Person.h"

class Employee : public Person {
protected:
    double salary;
public:
    Employee(std::string, double);
    void printName();
};

#endif /* defined(__ADS2Week1Lab1b__Employee__) */
