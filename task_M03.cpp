#include <iostream>
#include <cmath>

using namespace std;

double get_angle(double a, double b, double c) {


    // ����� ���������: cos(A) = (b^2 + c^2 - a^2) / (2bc)
    double cosA = (b*b + c*c - a*a) / (2 * b * c);

    // ��������� ���� � ��������
    double angle_radian = acos(cosA);

    // ������� � �������
    double angle_degree = angle_radian * 180.0 / M_PI;

    return angle_degree;
}

int main() {
    setlocale(0,"Russian");
    double a, b, c;
    cout << "������� ��� ������� ������������: ";
    cin >> a >> b >> c;

    if (a >= b + c || b >= a + c || c >= a + b) {
        cout << "����������� � ������ ��������� �� ����������." << endl;
        return 0;
    }

    double angle = get_angle(a, b, c);
    cout << "���� �������� ������ �������: " << angle << " ��������" << endl;


    return 0;
}
