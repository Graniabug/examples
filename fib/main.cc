/**
 * @file main.cc
 * @author Krerkkiat Chusap
 */
#include <iostream>

#include "fib.h"

/**
 * @brief Runs program to print fibonacci sequence
 * @param None
 * @return Exit sucess or failure
 */
int main() {
    int n;
    std::cout << "Please enter n: ";
    std::cin >> n;

    std::cout << "Fib(n) is " << fib_recursive(n) << std::endl;
    return EXIT_SUCCESS;
}