#include <iostream>

int main()
{
    int a {5};
    int b {8};
    
    // Оператор &&: если первый операнд false, второй не вычисляется
    bool result1 = a ==6 && b ==8;  // false && ... = false
    
    // Оператор ||: если первый операнд true, второй не вычисляется
    bool result2 = a ==5 || b ==0;  // true || ... = true
    
    std::cout << "result1: " << std::boolalpha << result1 << std::endl;
    std::cout << "result2: " << std::boolalpha << result2 << std::endl;
    
    // Демонстрация: порядок выполнения имеет значение
    bool result3 = b ==8 && a ==5;  // true && true = true
    std::cout << "result3: " << std::boolalpha << result3 << std::endl;
    return 0;
}
