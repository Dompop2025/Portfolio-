#include <iostream>

int main()
{
    int a {5};
    
    a <<= 4;  // 5 << 4 = 80
    a >>= 2;  // 80 >> 2 = 20
    
    // Примеры других битовых операций
    int b {0b1010}; // 10
    b &= 0b0011;    // b = 10 & 3 = 2
    b |= 0b1100;    // b = 2 | 12 = 14
    b ^= 0b0111;    // b = 14 ^ 7 = 9
    
    std::cout << "a = " << a << std::endl; // 20
    std::cout << "b = " << b << std::endl; // 9
    return 0;
}
