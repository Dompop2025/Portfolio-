#include <iostream>

int main()
{
    int a {10};
    int b {7};
    int c {a + b};  // 17
    int d {4 + b};  // 11
    
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    return 0;
}
