#include <iostream>

int main()
{
    bool a {true};
    bool b {false};
    bool c {a && b};    // false
    bool d {a && true}; // true
    
    std::cout << "true && false = " << std::boolalpha << c << std::endl;  // false
    std::cout << "true && true = " << std::boolalpha << d << std::endl;   // true
    return 0;
}
