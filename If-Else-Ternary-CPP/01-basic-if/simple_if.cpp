#include <iostream>

int main()
{
    int a {8};
    
    // Простой if
    if(a == 8)
    {
        std::cout << "a == 8" << std::endl;
    }
    
    // If с ложным условием
    if(a == 7)
    {
        std::cout << "a == 7" << std::endl;
    }
    
    std::cout << "End of program" << std::endl;
    return 0;
}
