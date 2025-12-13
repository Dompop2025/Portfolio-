#include <iostream>

int main()
{  
    int sum {};
    for (unsigned i {}; i < 6; sum += i++);
    
    std::cout << "Sum: " << sum << std::endl;   // Sum: 15
    return 0;
}
