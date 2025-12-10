#include <iostream>

int main()
{
    int a {5};
    int b {8};
    
    // Вложенный тернарный оператор
    std::cout << (a < b ? "a is less than b" :
        (a == b ? "a is equal to b" : "a is greater than b"));
    std::cout << std::endl;
    
    return 0;
}
