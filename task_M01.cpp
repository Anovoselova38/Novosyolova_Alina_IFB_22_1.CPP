#include <iostream>
using namespace std;

int main() {
    // Шапка таблицы
    cout << "\t";
    for (int i = 1; i <= 10; i++) {
        cout << i << '\t';
    }
    cout << endl;

    // Разделительная линия
    cout << "----------------------------------------------------------------------------------" << endl;

    // Тело таблицы
    for (int i = 1; i <= 10; i++) {

        cout << i << "|\t";//заголовок строки
        for (int j = 1; j <= 10; j++) {
            cout << i * j << '\t';
        }
        cout << endl;
    }

    return 0;
}
