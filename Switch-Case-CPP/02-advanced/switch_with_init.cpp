#include <iostream>

int main()
{
    char op = '+';
    int n = 10;
    
    // switch с инициализацией переменной (C++17)
    switch(int k{2}; op)
    {
        case '+':
            std::cout << n + k << std::endl;
            break;
        case '-':
            std::cout << n - k << std::endl;
            break;
        case '*':
            std::cout << n * k << std::endl;
            break;
    }
    
    return 0;
}
