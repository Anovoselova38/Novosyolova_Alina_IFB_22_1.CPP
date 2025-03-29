#include <iostream>
#include <string>
using namespace std;

string reverse(string user_string) {
    string reversed_string = "";
    for (int i = user_string.length() - 1; i >= 0; --i) {
        reversed_string += user_string[i];
    }
    return reversed_string;
}

int main() {
    setlocale(0,"Russian");
    string user_string = "Hello";
    cout << "Исходная строка: " << user_string << endl;
    string reversed_string = reverse(user_string); //Переворачиваем строку
    cout << "Перевёрнутая строка: " << reversed_string << endl;

    return 0;
}
