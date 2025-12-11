#include <iostream>

int main()
{
    int x {2};
    
    switch(x)
    {
        case 1: 
            std::cout << "x = 1" << "\n";
        case 2: 
            std::cout << "x = 2" << "\n";
        case 3: 
            std::cout << "x = 3" << "\n";
        default: 
            std::cout << "x is undefined" << "\n";
    }
    // Вывод:
    // x = 2
    // x = 3
    // x is undefined
    
    return 0;
}
