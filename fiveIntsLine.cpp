// Copyright (c) 2025 All rights reserved.
//
// Created by: Adrian student
// Created on: 20th NOV 2026
// This program uses nested loops to print out
// integers from 1000 to 2000, outputting five
// integers per line with each separated by a space
# include <iostream>

int main() {
    // define variables
    int counter;

    // set up the loop for the range of numbers
    for (counter = 1000; counter <= 2000; counter++) {
        std::cout << counter << " ";
        // structure ouput to 5 integers per line
        if (counter % 5 == 4) {
            std::cout << "\n";
        }
    }
    std::cout << "\n";
}
