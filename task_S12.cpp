#include <iostream>
/*
S12: ������� ����� �� 1 �� 1000 � ����� 4
� ���������� ����� �����, ��������� �� 7
*/

main(){
    int sum = 0;
    for (int i = 1; i <= 1000; i += 4){
        if (i % 7 ==0 ){
            sum += i;
        }
    }
    std::cout << sum << std::endl;
}
