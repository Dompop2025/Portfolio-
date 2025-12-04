#include <iostream>

int main()
{
    double sum {100.2};
    unsigned int hours {8};
    unsigned int revenuePerHour { (unsigned int)sum/hours };     // revenuePerHour = 12
    
    std::cout << "Revenue per hour = " << revenuePerHour << std::endl;
    return 0;
}
