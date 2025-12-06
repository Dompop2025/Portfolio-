#include <iostream>

int main()
{
    int a {8};
    int b {11};
    bool c {a == b};    // false
    bool d {a != b};    // true
    
    // Обычный вывод (0/1)
    std::cout << "c = " << c << std::endl;  // c = 0
    std::cout << "d = " << d << std::endl;  // d = 1
    
    // Вывод true/false
    std::cout << "c = " << std::boolalpha << c << std::endl;  // c = false
    std::cout << "d = " << std::boolalpha << d << std::endl;  // d = true
    return 0;
}
