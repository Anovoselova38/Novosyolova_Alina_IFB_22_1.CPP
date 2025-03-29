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


    cout << "Исходная строка: ";
    for (int i = 0; i < user_string.length(); ++i) {
        cout << user_string[i];
    }

    cout << endl;
    string reversed_str = reverse(user_string);
    cout << "Перевёрнутая строка: " << reversed_str << endl;

    return 0;
}
