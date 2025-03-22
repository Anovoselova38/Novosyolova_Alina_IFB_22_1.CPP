#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream file_to_write("output");
    setlocale(0,"Russian");
    int A,B;
    cout << "Введите числа" << endl;
    cin >> A >> B;
        for (int i = A; i <= B; ++i){
        file_to_write << i * 3 << endl ;

}
    file_to_write.close();
    return 0;
}
