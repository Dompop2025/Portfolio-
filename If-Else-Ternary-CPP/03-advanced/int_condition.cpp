#include <iostream>

int main()
{
    int a {8};
    // a = true (ненулевое)
    if(a) std::cout << "a = true" << std::endl; 
    else  std::cout << "a = false" << std::endl; 
     
    int b {};
    // b = false (нулевое)
    if(b) std::cout << "b = true" << std::endl; 
    else  std::cout << "b = false" << std::endl; 
    
    return 0;
}
