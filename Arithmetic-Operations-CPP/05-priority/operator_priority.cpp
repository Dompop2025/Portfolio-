#include <iostream>

int main()
{
    int a = 8;
    int b = 7;
    int c = a + 5 * ++b;      // 48
    
    std::cout << "c = " << c << std::endl;
    return 0;
}
