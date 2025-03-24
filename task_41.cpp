/* Напишите функцию squared_sum(),
которая принимает два дробных числа
и возвращает квадрат их суммы
*/
#include <iostream>
#include <cmath> // Для функции pow()
using namespace std;

double squared_sum(double number_1, double number_2){
     return pow(number_1 + number_2, 2);
}
int main(){
    setlocale(0,"Russian");
    double result = squared_sum(12, 12);
    cout << "Квадрат суммы: " << result << endl; // Вывод результата


    return 0;
}
