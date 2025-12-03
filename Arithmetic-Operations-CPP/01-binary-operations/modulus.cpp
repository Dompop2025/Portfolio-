#include <iostream>

int main()
{
    int a {26};
    int b {5};
    int c {a % b};      // c = 26 % 5 = 26 - 5 * 5 = 1
    int d {4 % b};     // d = 4 % 5 = 4
    
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    return 0;
}
