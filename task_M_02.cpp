#include <iostream>
#include <cmath>

using namespace std;
double N_angle_area (double N, double A ){
    double  cot_x;
    const double pi = 3.141592653589793;
    cot_x = 1/tan(pi/N);
    double area = (N*A*A)/4 * (cot_x);
    return area;

}
int main(){
    setlocale(0,"Russian");
    double A;
    double N;
    cout << "������� ����� ������� N-��������� � ����������"<< endl;
    cin >> A;
    cout << "������� ����� ������ N-��������� ����������"<< endl;
    cin >> N;
    cout << "������� ������ N-��������� ����������: " << N_angle_area(A,N) <<" ��" << endl;
    return 0;

}

