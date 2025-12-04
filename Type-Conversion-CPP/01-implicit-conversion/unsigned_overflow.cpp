#include <iostream>

int main()
{
    unsigned char a = -5;           // 251
    unsigned short b = -3500;       // 62036
    unsigned int c = -50000000;     // 4244967296
    
    std::cout << "a = " << (int)a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    return 0;
}
