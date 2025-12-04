#include <iostream>

int main()
{
    short a = 'g'; // преобразование из char в short
    int b = 10;
    double c = b; // преобразование из int в double
    float d = 3.4;
    double e = d; // преобразование из float в double
    double f = 35; // преобразование из int в double
    
    std::cout << "a = " << a << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "f = " << f << std::endl;
    return 0;
}
