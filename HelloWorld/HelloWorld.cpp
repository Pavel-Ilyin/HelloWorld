#include <iostream>
#include "Calculator.h"
#include <string>

int main()
{
    Calculator calculator = Calculator();
    int sumResult = calculator.sum(2, 3);
    std::cout << "Hello World!\n" + std::to_string(sumResult);
}