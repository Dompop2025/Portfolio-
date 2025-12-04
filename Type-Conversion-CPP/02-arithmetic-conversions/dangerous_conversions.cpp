#include <iostream>

int main()
{
    int n {5};
    unsigned int x {8};
    std::cout << "result = " << n - x << std::endl; // result = 4294967293
    
    return 0;
}
