/* S31 (1�) �������� ��������� ������ � ���������� ���� �� 0 �� 9.
������������ ������ �����
� �������� �� ����� ��� ��������.
*/

#include <iostream>
using namespace std;
int main(){
    setlocale(0,"Russian");
    // ������ ����� � ���������� ���� �� 0 �� 9
    string numbers[] = {
        "����", "����", "���", "���", "������",
        "����", "�����", "����", "������", "������"
    };
    int number;
    cout << "������� �����" << endl;
    cin >> number;
    cout << numbers[number];

    return 0;}
