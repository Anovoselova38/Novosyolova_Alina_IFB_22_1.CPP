#include <iostream>
/*
S12: Перебор чисел от 1 до 1000 с шагом 4
и нахождение суммы чисел, делящихся на 7
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
