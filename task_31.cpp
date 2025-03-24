/* S31 (1б) Создайте текстовый массив с названиями цифр от 0 до 9.
Пользователь вводит число
и получает на экран его название.
*/

#include <iostream>
using namespace std;
int main(){
    setlocale(0,"Russian");
    // Массив строк с названиями цифр от 0 до 9
    string numbers[] = {
        "Ноль", "Один", "Два", "Три", "Четыре",
        "Пять", "Шесть", "Семь", "Восемь", "Девять"
    };
    int number;
    cout << "Введите число" << endl;
    cin >> number;
    cout << numbers[number];

    return 0;}
