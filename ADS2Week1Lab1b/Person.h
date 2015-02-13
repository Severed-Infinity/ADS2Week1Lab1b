//
//  Person.h
//  ADS2Week1Lab1b
//
//  Created by david swift on 11/02/2015.
//  Copyright (c) 2015 david swift. All rights reserved.
//

#ifndef __ADS2Week1Lab1b__Person__
#define __ADS2Week1Lab1b__Person__

#include <stdio.h>
#include <string>

class Person {
protected:
    std::string name;
    
public:
    Person(std::string);
    virtual void printName() = 0;
    bool operator > (const Person &rhs);
    bool operator < (const Person &rhs);
    bool operator == (const Person &rhs);
};

#endif /* defined(__ADS2Week1Lab1b__Person__) */
