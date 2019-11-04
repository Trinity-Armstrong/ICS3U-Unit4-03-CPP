// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: October 2019
// This program uses a for loop

#include <iostream>
#include <cmath>

main() {
    // this function uses a for loop
    int positiveInteger;
    int counter;
    int answer;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> positiveInteger;
    std::cout << "" << std::endl;

    // process & output
    for (counter = 0; counter < positiveInteger + 1; counter++) {
        answer = pow(counter, 2);
        std::cout << counter << "² = " << answer << std::endl;
    }
}
