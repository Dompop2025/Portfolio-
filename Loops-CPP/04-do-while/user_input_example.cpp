#include <iostream>

int main()
{
    char reply {};          // ответ пользователя
    int count {};           // количество введенных чисел
    double number {};       // для ввода числа
    double total {};        // общая сумма чисел
    
    do
    {
        std::cout << "Enter a number: ";
        std::cin >> number; // Вводим число
        total += number;    // прибавляем к совокупному числу
        ++count;            // увеличиваем количество введенных чисел на 1
        std::cout << "Finish? (y/n): ";
        std::cin >> reply;  // считываем ответ пользователя
    } while (reply != 'y' && reply != 'Y');     // пока пользователь не введет символ y и Y
    
    std::cout << "The average value is " << total/count << std::endl;
    return 0;
}
