#include <iostream>

int main()
{
    int value1 {3};  // 0b0000'0011
    int value2 {2};  // 0b0000'0010
    int value3 {1};  // 0b0000'0001
    int result {0b0000'0000};
    
    result = result | (value1 << 4);
    result = result | (value2 << 2);
    result = result | value3;  // 0b0011'1001
    
    std::cout << "Прямая упаковка: " << result << std::endl;   // 57
    return 0;
}
