// Copyright (c) 2025 Jayden Smith All rights reserved.
// Created by: Jayden Smith
// Date: March 19, 2025
// This program tells the user if a number is positive or negative

#include <iostream>

int main() {
    // First I define my variables
    int userNum;
    // Then I get the number
    std::cout
        << "What is your number:";
    std::cin >> userNum;
    // Then the code checks if its positive or negative and displays and answer
    if (userNum > 0) {
        std::cout << userNum << " is positive\n";
    } else if (userNum < 0) {
        std::cout << userNum << " is negative\n";
    } else {
        std::cout << "Your Number is "<< userNum << "!\n";
    }
}

