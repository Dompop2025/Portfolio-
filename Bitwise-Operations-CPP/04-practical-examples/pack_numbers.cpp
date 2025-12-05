#include <iostream>

int main()
{
    int value1 {3};  // 0b0000'0011
    int value2 {2};  // 0b0000'0010
    int value3 {1};  // 0b0000'0001
    int result {0b0000'0000};
    
    result = result | value1; // 0b0000'0011
    result = result << 2;   // 0b0000'1100
    result = result | value2;  // 0b0000'1110
    result = result << 2;   // 0b0011'1000
    result = result | value3;  // 0b0011'1001
    
    std::cout << "Упакованное число: " << result << std::endl;   // 57
    return 0;
}
