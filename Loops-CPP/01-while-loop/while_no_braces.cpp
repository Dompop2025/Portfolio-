#include <iostream>

int main()
{
    int i {};
    while(++i < 10)
        std::cout << i << " * " << i << " = " << i * i << std::endl;
    
    return 0;
}
