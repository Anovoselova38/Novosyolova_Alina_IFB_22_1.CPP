#include <iostream>
using namespace std;

sort(int numbers[], int size_numbers) {
    for (int i = 0; i < size_numbers - 1; ++i) {
        for (int j = 0; j < size_numbers - i - 1; ++j) {
            if (numbers[j] < numbers[j + 1]) { // по убываниию
                // Меняем элементы местами
                int temporary = numbers[j];  //для  сохранения элемента при замене положения
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temporary;
            }
        }
    }
}

int main() {
    setlocale(0,"Russian");
    int numbers[] = {10, 2, 8, 4, 6, 5, 7, 3, 9, 1};
    int size_numbers = sizeof(numbers) / sizeof(numbers[0]);

    sort(numbers, size_numbers);

    cout << "После сортировки: ";
    for (int i = 0; i < size_numbers; ++i) {
        cout << numbers[i] << " ";
    }

    return 0;
}
