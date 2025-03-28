/* Напишите функцию squared_sum(),
которая принимает два дробных числа
и возвращает квадрат их суммы
*/
#include <iostream>
#include <cmath>
using namespace std;

double squared_sum(double number_1, double number_2){
    double sum = number_1 + number_2 ;
    return (sum * sum);
}
int main(){
    setlocale(0,"Russian");
    double result = squared_sum(12, 12);
    cout << result << endl;
    return 0;
}
