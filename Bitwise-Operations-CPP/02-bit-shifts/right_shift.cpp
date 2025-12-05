#include <iostream>

int main()
{
    unsigned int b = 16 >> 3;         // 10000 на три разряда вправо = 10 - 2
    std::cout << "16 >> 3 = " << b << std::endl;
    return 0;
}
