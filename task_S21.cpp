#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(0, "Russian");

    // �������� �� ������������ 2 �����
    double A, B;
    cout << "������� ��� ����� A � B: ";
    cin >> A >> B;

    // ��������� ���� ��� ������
    ofstream file_to_write("output.txt");
    for (int i = A; i <= B;++i){
        // ���������� ����� � ����
    file_to_write << i * 3 << endl;
    }

    // ��������� ����
    file_to_write.close();
    return 0;
}
