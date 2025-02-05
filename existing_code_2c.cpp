/** 
 * @file enhanced_example.cpp
 * @author Alex Smith
 * @version 2.0
 * @brief Demonstrates Doxygen-style documentation with additional sections.
 * @details This example includes enhanced features, such as new subheadings
 * and extended descriptions to illustrate structured documentation practices.
 * @date Thursday, February 1, 2025
 */

/**
 * @mainpage
 * This program is designed to showcase advanced documentation practices.
 * - Demonstrates how to document a C++ class and its methods.
 
// Include Section
#include <iostream>
#include <cmath>
using namespace std;

// Class Definition Section
/**
 * @class Calculator
 * @brief A simple calculator class.
 * @details This class provides basic arithmetic operations and utility functions 
 * for demonstration purposes.
 */
class Calculator {
public:
    /**
     * @brief Adds two integers.
     * @param a The first integer.
     * @param b The second integer.
     * @return The sum of a and b.
     */
    int add(int a, int b) {
        return a + b;
    }

    /**
     * @brief Calculates the square root of a number.
     * @param x The number for which the square root is to be calculated.
     * @return The square root of x.
     * @pre x must be non-negative.
     * @post Returns a positive number or 0 if x is 0.
     */
    double sqrt(double x) {
        return std::sqrt(x);
    }
};

// Main Function Section
/**
 * @brief The main entry point for the program.
 * @details Demonstrates the usage of the Calculator class methods.
 * @return int Indicates successful program execution.
 */
int main() {
    Calculator calc;

    // Demonstrating addition
    int sum = calc.add(10, 20);
    cout << "Sum of 10 and 20: " << sum << endl;

    // Demonstrating square root
    double result = calc.sqrt(25.0);
    cout << "Square root of 25: " << result << endl;

    cout << "\nPress Enter to exit...";
    cin.ignore(80, '\n');
    return 0;
}
