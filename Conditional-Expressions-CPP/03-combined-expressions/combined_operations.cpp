#include <iostream>

int main()
{
    int a {5};
    int b {8};
    
    bool result1 = a ==5 && b > 8;  // true && false = false
    bool result2 = a ==5 || b > 8;  // true || false = true
    bool result3 = a ==5 ^ b > 8;   // true ^ false = true
    
    std::cout << "(a ==5 && b > 8) - " << std::boolalpha << result1 << std::endl;
    std::cout << "(a ==5 || b > 8) - " << std::boolalpha << result2 << std::endl;
    std::cout << "(a ==5 ^ b > 8) - " << std::boolalpha << result3 << std::endl;
    return 0;
}
