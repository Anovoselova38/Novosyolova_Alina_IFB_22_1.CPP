#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream file_to_write("output");
    setlocale(0,"Russian");
    int A,B;
    cout << "������� �����" << endl;
    cin >> A >> B;
    file_to_write << "�������� �� 3" << endl;
        for (int i = A; i <= B; ++i){
        file_to_write << i * 3 << endl ;

}
    file_to_write.close();
    return 0;
}
