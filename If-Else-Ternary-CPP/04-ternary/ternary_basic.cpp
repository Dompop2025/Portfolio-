#include <iostream>

int main()
{
    int a {9};
    int b {8};
    
    // Тернарный оператор вместо if-else
    int c = a > b ? a - b : a + b;
    
    std::cout << "c = " << c << std::endl;  // c = 13
    return 0;
}
