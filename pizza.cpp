// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on April 28, 2021
// Calculates the cost of pizza with user input diameter
#include <iostream>
#include <iomanip>
const float HST = 0.13;
const float LABOR = 0.75;
const float RENT = 1;
const float MAT = 0.5;
int diameter;
double sub_total, total;


int main() {
    // Function that calculates the total cost
    std::cout << "Input diameter of pizza (inch): ";
    std::cin >> diameter;
    // User input
    sub_total = MAT * diameter + LABOR + RENT;
    total = sub_total + (sub_total * HST);
    // Process
    std::cout << "The cost of a " << diameter
    << " inch pizza is: $"<< std::fixed << std::setprecision(2)
    << std::setfill('0') << total;
    // Output
}
