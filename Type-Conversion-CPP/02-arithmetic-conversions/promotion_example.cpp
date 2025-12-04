#include <iostream>

int main()
{
    double sum {100.2};
    int hours {8};
    double revenuePerHour {sum / hours}; // hours преобразуется в double
    
    std::cout << "Revenue per hour = " << revenuePerHour << std::endl;
    return 0;
}
