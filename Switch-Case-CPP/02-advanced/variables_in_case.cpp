#include <iostream>

int main()
{
    int x {2};
    
    switch(x)
    {
        case 1:
        {
            int a{10};
            std::cout << a << std::endl;
            break;
        }
        case 2:
        {
            int b{20};
            std::cout << b << std::endl;
            break;
        }
        default:
            int c{30};
            std::cout << c << std::endl;
    }
    
    return 0;
}
