/* �������� ������� squared_sum(),
������� ��������� ��� ������� �����
� ���������� ������� �� �����
*/
#include <iostream>
#include <cmath> // ��� ������� pow()
using namespace std;

double squared_sum(double number_1, double number_2){
     return pow(number_1 + number_2, 2);
}
int main(){
    setlocale(0,"Russian");
    double result = squared_sum(12, 12);
    cout << "������� �����: " << result << endl; // ����� ����������


    return 0;
}
