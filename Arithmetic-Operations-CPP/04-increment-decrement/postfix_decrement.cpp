#include <iostream>

int main()
{
    int a {8};
    int b {a--};
    std::cout << "a = " << a << std::endl;  // a = 7
    std::cout << "b = " << b << std::endl;  // b = 8
    return 0;
}
