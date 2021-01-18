// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Roman Cernetchi
// Created on: January 2021
// This program handles input and prints the average

#include <iostream>
#include <list>
#include <cmath>
#include <string>


float average(std::list<int> listOfMarks) {
    // This function handles input and prints the average

    float total = 0;
    float average_number;
    float number_of_elements = listOfMarks.size();
    float rounded_average;

    for (int single_element : listOfMarks) {
        total += single_element;
    }


    average_number = total / number_of_elements;

    rounded_average = average_number * pow(10, 0) + 0.5;
    rounded_average = static_cast<int>(rounded_average);
    rounded_average = rounded_average / pow(10, 0);

    return rounded_average;
}


int main() {
    // This function handles input and output

    std::cout << "Please enter 1 mark at a time. Enter -1 to end."
              << std::endl;
    std::cout << "" << std::endl;

    std::list<int> listOfMarks;
    float average_number;
    std::string marks;
    int a_single_mark;

    while (true) {
        std::cout << "Enter a mark (%): ";
        std::cin >> marks;
        try {
            a_single_mark = std::stoi(marks);
            if (a_single_mark < 0) {
                if (a_single_mark == -1) {
                    break;
                }
            }
        listOfMarks.push_back(a_single_mark);
        } catch (std::invalid_argument) {
            std::cout << "Invalid input, Try again."
                      << std::endl;
        }
    }

    average_number = average(listOfMarks);

    // Output
    std::cout << "" << std::endl;
    std::cout << "The average is: " << average_number << "%" << std::endl;
}
