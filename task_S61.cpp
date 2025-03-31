#include <iostream>
using namespace std;

class Bucket {
public:
    double volume;
    double used;

    //����������� ������
    Bucket(double vol, double usd) : volume(vol), used(usd) {}

    double flush();
    double fill(double space_to_fill);
};

double Bucket::flush() {
    used = 0;
    return used;
}

double Bucket::fill(double space_to_fill) {
    double available = volume - used; //��������� �����

    if (space_to_fill <= available) { // ���� ����� ����������
        used += space_to_fill;//��������� ����� ���������
        return 0;
    }
    else { // ���� ����� ������������
        double remaining = space_to_fill - available;
        used = volume; // ��������� ����� ���������
        return remaining; // ���������� �������
    }
}

int main() {
    // �������� ���
    Bucket test_01(12, 3);
    cout << "1) " << test_01.volume << ", " << test_01.used << "\n"; // 12, 3

    double rest = test_01.fill(14);
    cout << "2) " << test_01.used << ", " << rest << "\n";  // 12, 5

    test_01.flush();
    rest = test_01.fill(8);
    cout << "3) " << test_01.used << ", " << rest << "\n";   // 8, 0

    return 0;
}
