#include <iostream>

int main()
{
    int a {8};
    int b {a++};
    std::cout << "a = " << a << std::endl;  // a = 9
    std::cout << "b = " << b << std::endl;  // b = 8
    return 0;
}
