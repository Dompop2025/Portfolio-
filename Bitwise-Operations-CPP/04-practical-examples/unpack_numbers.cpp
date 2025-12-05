#include <iostream>

int main()
{
    int result {0b0011'1001};
    
    int newValue3 = result & 0b000'0011;
    result = result >> 2;
    int newValue2 = result & 0b000'0011;
    result = result >> 2;
    int newValue1 = result & 0b000'0011;
    
    std::cout << "newValue1 = " << newValue1 << std::endl;   // 3
    std::cout << "newValue2 = " << newValue2 << std::endl;   // 2
    std::cout << "newValue3 = " << newValue3 << std::endl;   // 1
    return 0;
}
