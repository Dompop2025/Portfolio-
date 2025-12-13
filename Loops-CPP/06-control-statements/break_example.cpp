#include <iostream>

int main()
{
    int result{};
    for(int i{1}; i < 10; i++)
    {   
        result += i;
        std::cout << result << std::endl;
        if(result > 20) break;
    }
    
    return 0;
}
