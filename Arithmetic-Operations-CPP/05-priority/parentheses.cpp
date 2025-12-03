#include <iostream>

int main()
{
    int a {8};
    int b {7};
    int c {(a + 5) * ++b};      // c = 104
    
    std::cout << "c = " << c << std::endl;
    return 0;
}
