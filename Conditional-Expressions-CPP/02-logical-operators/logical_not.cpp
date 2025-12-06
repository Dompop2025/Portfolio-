#include <iostream>

int main()
{
    bool a {true};
    bool b {!a};    // false
    bool c {!b};    // true
    
    std::cout << "!true = " << std::boolalpha << b << std::endl;  // false
    std::cout << "!false = " << std::boolalpha << c << std::endl; // true
    return 0;
}
