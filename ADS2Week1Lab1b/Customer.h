//
//  Customer.h
//  ADS2Week1Lab1b
//
//  Created by david swift on 12/02/2015.
//  Copyright (c) 2015 david swift. All rights reserved.
//

#ifndef __ADS2Week1Lab1b__Customer__
#define __ADS2Week1Lab1b__Customer__

#include <stdio.h>
#include "Person.h"

class Customer : public Person {
protected:
    std::string compliant;
public:
    Customer(std::string, std::string);
    void printName();
};

#endif /* defined(__ADS2Week1Lab1b__Customer__) */
