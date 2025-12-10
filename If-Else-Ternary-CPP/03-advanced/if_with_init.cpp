#include <iostream>

int main()
{
    int a {5};
    int b {3};
    
    // if с инициализацией переменной (C++17)
    if(int c {a - b}; a > b)
    {
        std::cout << "a=" << a << "; c=" << c << std::endl;
    }
    else
    {
        std::cout << "b=" << b << "; c=" << c << std::endl;
    }
    
    // Другой пример
    if(int rem {a % b}; rem == 0)
    {
        std::cout << "a divisible by b" << std::endl;
    }
    else
    {
        std::cout << "remaining of a / b = " << rem << std::endl;
    }
    
    return 0;
}
