#include <iostream>

int main()
{
    int a {10};
    int b {7};
    int c {a * b};  // 70
    int d {4 * b};  // 28
    
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    return 0;
}
