#include <iostream>

int main()
{
    int a {10};
    int b {4};
    bool c {a == b};    // false
    bool d {a == 10};   // true
    bool e {a != b};    // true
    
    std::cout << "c = " << c << std::endl;  // 0
    std::cout << "d = " << d << std::endl;  // 1
    std::cout << "e = " << e << std::endl;  // 1
    return 0;
}
