#include <iostream>

int main()
{
    int a {5};
    
    a += 10;        // 15
    a -= 3;         // 12
    a *= 2;         // 24
    a /= 6;         // 4
    
    std::cout << "a = " << a << std::endl; // 4
    return 0;
}
