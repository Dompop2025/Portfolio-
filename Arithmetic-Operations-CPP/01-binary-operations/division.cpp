#include <iostream>

int main()
{
    int a {26};
    int b {5};
    int c {a / b};      // c = 5
    int d {4 / b};     // d = 0
    
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    return 0;
}
