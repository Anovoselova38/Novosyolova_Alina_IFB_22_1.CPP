#include <iostream>
/*
S11: ����������� ������� ����� �� 0 �� 100
� ����� �����, ��������� �� 3
*/

main() {
    for (int i = 0; i <= 100;++i){
        if(i % 3 == 0){
        std::cout << i << std::endl;
        }
    }
}
