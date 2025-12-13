#include <iostream>

int main()
{
    int result {};
    for (int i {1}; i < 10; i++)
    {
        if (i % 2 == 0) continue;
        result += i;
    }
    std::cout << "result = " << result << std::endl; // result = 25
    
    return 0;
}
