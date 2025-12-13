#include <iostream>

int main()
{   
    // range-based for (for-each)
    for (int n : {2, 3, 4, 5})
    {
        std::cout << n << std::endl;
    }
    
    return 0;
}
