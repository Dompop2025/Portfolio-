#include <iostream>

int main()
{   
    int i {6};
    do
    {
        std::cout << i << std::endl;
        i--;
    }
    while(i > 0);
    
    return 0;
}
