#include <iostream>

int main()
{
    // Пример с break для выхода из бесконечного цикла
    int n {};
    
    // бесконечный цикл while
    while(true)
    {
        std::cout << "Enter a number: ";
        std::cin >> n; // Вводим число
        
        // если пользователь ввел 0, то выходим из цикла
        if(n == 0) break; 
        
        // иначе выводим квадрат числа
        std::cout << n * n << std::endl;   
    }
    
    // Примеры бесконечных циклов (закомментированы)
    /*
    // бесконечный цикл for
    for (;;)
    {
    }
    
    // бесконечный цикл do-while
    do
    {
    }
    while (true);
    */
    
    return 0;
}
