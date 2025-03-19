#include <iostream>
/*
S01: Создание 4 переменных разного типа
и демонстрация работы арифметических операторов
*/

main() {
    int number_1 = 10;
    double number_2 = 5.5;
    float number_3 = 2.5f;
    long number_4 = 20;

    std::cout << number_1 + number_2 << std::endl;
    std::cout << number_2 - number_3 << std::endl;
    std::cout <<  number_3 * number_4 << std::endl;
    std::cout <<  number_4 / number_1 << std::endl;
    return 0
}
