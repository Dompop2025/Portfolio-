#include <iostream>

int main()
{
    int a {10};
    int b {4};
    
    bool gt {a > b};   // true
    bool lt {10 < 4};  // false
    bool ge {10 >= 4}; // true
    bool le {10 <= 14};// true
    
    std::cout << "a > b: " << gt << std::endl;
    std::cout << "10 < 4: " << lt << std::endl;
    std::cout << "10 >= 4: " << ge << std::endl;
    std::cout << "10 <= 14: " << le << std::endl;
    return 0;
}
