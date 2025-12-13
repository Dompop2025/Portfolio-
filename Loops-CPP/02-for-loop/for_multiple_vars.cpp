#include <iostream>

int main()
{   
    for (int i {1}, j {5}; i < 6 && j < 10; i++, j++)
    {
        std::cout  << i << "*" << j << "=" << i * j << std::endl;
    }
    
    return 0;
}
