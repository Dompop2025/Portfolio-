#include <iostream>

int main()
{
    int a {8};
    int b {--a};
    std::cout << "a = " << a << std::endl;  // a = 7
    std::cout << "b = " << b << std::endl;  // b = 7
    return 0;
}
