#include <iostream>

int main() {
    // Целочисленные типы
    int age = 14;
    short smallNumber = 100;
    long bigNumber = 1000000;
    
    // Числа с плавающей точкой
    float pi = 3.14159f;
    double precisePi = 3.1415926535;
    
    // Символы и строки
    char grade = 'A';
    std::string name = "Bobrov";
    
    // Логический тип
    bool isLearningCpp = true;
    
    // Вывод значений
    std::cout << "Возраст: " << age << std::endl;
    std::cout << "Оценка: " << grade << std::endl;
    std::cout << "Имя: " << name << std::endl;
    std::cout << "Изучаю C++: " << std::boolalpha << isLearningCpp << std::endl;
    
    // Размеры типов в байтах
    std::cout << "\nРазмеры типов:" << std::endl;
    std::cout << "int: " << sizeof(int) << " байт" << std::endl;
    std::cout << "double: " << sizeof(double) << " байт" << std::endl;
    
    return 0;
}
