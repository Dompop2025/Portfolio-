#include <iostream>

int main()
{
    int x {2};
    
    switch(x)
    {
        case 1:
        case 2: 
            std::cout << "x = 1 or 2" << "\n";
            break;
        case 3: 
        case 4:
            std::cout << "x = 3 or 4" << "\n";
            break;
        case 5:
            std::cout << "x = 5" << "\n";
            break;
    }
    
    return 0;
}
