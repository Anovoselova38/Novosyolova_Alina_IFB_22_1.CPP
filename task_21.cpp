#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(0, "Russian");

    // Ïîëó÷èòü îò ïîëüçîâàòåëÿ 2 ÷èñëà
    double A, B;
    cout << "Введите два числа A и B: ";
    cin >> A >> B;

    // Открываем файл для записи
    ofstream file_to_write("output.txt");
    for (int i = A; i <= B;++i){
        // Записываем числа в файл
    file_to_write << i * 3 << endl;
    }

    // Закрываем файл
    file_to_write.close();
    return 0;
}
