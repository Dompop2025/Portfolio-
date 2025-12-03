#include <iostream>

int main()
{
    float num1{ 1.23E-4 };        // 0.000123
    float num2{ 3.65E+6 };        // 3650000
    float sum {num1 + num2};       // sum = 3.65e+06
    
    std::cout << "sum = " << sum << "\n";
    return 0;
}
