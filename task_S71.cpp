
#include <iostream>
using namespace std;

class CreditCard {
public:
    int Number;
    float Balance;

    //����������� ������
    CreditCard(int num, float bal) : Number(num), Balance(bal) {}

    double put(float money_amount);
    double take(float money_amount);
};
double CreditCard::put(float money_amount) {
    Balance += money_amount;
    return 0;
}

double CreditCard::take(float money_amount) {
    if(money_amount <= Balance){
            Balance -= money_amount;
    }
    else{
            cout << "������������ �������" << endl;

    }

}



int main(){
    setlocale(0,"Russian");
    //�������� �������
    CreditCard firstCC(1234, 50);
    CreditCard* first_credit_card = &firstCC;

    first_credit_card ->put(5000);
    cout << "������ ����� ����������: " << first_credit_card->Balance << endl;

    first_credit_card ->take(3000);
    cout << "������ ����� c�����: " << first_credit_card->Balance << endl;


    return 0;
}

