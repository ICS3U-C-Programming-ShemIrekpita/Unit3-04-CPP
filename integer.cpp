// Created by: Shem
// Created on: 10/19/2025
// This program asks the user to enter an integer and tells
// them if it is positive, negative, or zero.
// Copyright 2025 Shem
#include <iostream>

int main() {
// Ask user for A Number
    int number;
    std::cout << "Enter A Number: ";
    std::cin >> number;
// Check if the number is positive, negative, or zero
    if (number > 0) {
        std::cout << number << " is a positive number." << std::endl;
    } else if (number < 0) {
        std::cout << number << " is a negative number." << std::endl;
    } else {
        std::cout << number << " is just zero!" << std::endl;
    }
}
