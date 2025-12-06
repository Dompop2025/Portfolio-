#include <iostream>

int main()
{
    bool a {true};
    bool b {false};
    bool c {a || b};        // true
    bool d {b || false};    // false
    
    std::cout << "true || false = " << std::boolalpha << c << std::endl;  // true
    std::cout << "false || false = " << std::boolalpha << d << std::endl; // false
    return 0;
}
