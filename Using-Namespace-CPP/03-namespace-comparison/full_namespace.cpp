#include <iostream>

// Разные способы подключения пространств имён
using std::cout;  // Только cout
using std::endl;  // Только endl

int main()
{
    // cin без using - нужно писать std::
    int number;
    std::cout << "Enter number: ";
    std::cin >> number;
    
    // cout и endl доступны без префикса
    cout << "You entered: " << number << endl;
    
    return 0;
}
