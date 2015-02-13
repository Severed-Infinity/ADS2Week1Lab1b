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

void sort(Person *array[], int arraySize){
    int gap = arraySize;
    bool swapped = true;
    while (gap > 1 || swapped){
        if (gap > 1){
            gap = (gap * 10) / 13;
        }
        swapped = false;
        for (unsigned int i = 0; i + gap < arraySize; i++){
            if (array[i] > array[i + gap]){
                Person *tmp = array[i];
                array[i] = array[i + gap];
                array[i + gap] = tmp;
                swapped = true;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    
    Person *personPtr; //= new Person("johnny");
    //personPtr->printName();
    
    personPtr = new Employee("Graham", 34000.00);
    personPtr->printName();
    
    personPtr = new Customer("charles", "I'd like to make a compliant");
    personPtr->printName();
    
    
    Person *persons[4];
    
    persons[3] = new Customer("Plankon", "I'd I wish to file a compliant about Patrick.");
    persons[0] = new Employee("SpongeBob", 20000.00);
    persons[2] = new Employee("Patrick", 12000.00);
    persons[1] = new Employee("Crabs", 100000000.00); //ignores crabs in sorting, possible over kill with comb sort.
    
    sort(persons, 4);
    
    for (int i = 0; i < 4; i++) {
        persons[i]->printName();
    }
    return 0;
}
