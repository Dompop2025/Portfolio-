#include <iostream>

int main()
{
    int a {8};
    
    // Без фигурных скобок (одна инструкция)
    if(a == 8)
        std::cout << "a == 8" << std::endl;
    
    // На одной строке
    if(a == 8) std::cout << "a == 8" << std::endl;
    
    std::cout << "End of program" << std::endl;
    return 0;
}
