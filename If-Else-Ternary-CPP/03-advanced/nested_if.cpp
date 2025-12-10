#include <iostream>

int main()
{
    int a {5};
    int b {8};
    
    if(a == 5)
    {
        if(b == 8)
        { 
            std::cout << "b == 8" << std::endl;
        }
        else
        {
            std::cout << "b != 8" << std::endl;
        }
        std::cout << "a == 5" << std::endl;
    }
    else
    {
        std::cout << "a != 5 " << std::endl;
    }
    
    return 0;
}
