#include <iostream>

int main()
{
    unsigned int x{3};
    unsigned int number{7};
    unsigned int result{number << x};    // 7 * 2*2*2 = 56
    std::cout << "7 << 3 = " << result << std::endl;
    
    number = 26;
    result = number >> x;       // 26 / (2*2*2) = 3
    std::cout << "26 >> 3 = " << result << std::endl;
    return 0;
}
