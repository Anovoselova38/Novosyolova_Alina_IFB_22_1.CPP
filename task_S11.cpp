#include <iostream>
/*
S11: Циклический перебор чисел от 0 до 100
и вывод чисел, делящихся на 3
*/

main() {
    for (int i = 0; i <= 100;++i){
        if(i % 3 == 0){
        std::cout << i << std::endl;
        }
    }
}
