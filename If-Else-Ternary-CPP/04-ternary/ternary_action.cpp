#include <iostream>

int main()
{
    int a {5};
    int b {8};
    
    // Тернарный оператор с действиями
    a > b ? std::cout << a - b : std::cout << a + b;
    std::cout << std::endl;
    
    return 0;
}
