#include <iostream>
/*
S12: Ïåðåáîð ÷èñåë îò 1 äî 1000 ñ øàãîì 4
è íàõîæäåíèå ñóììû ÷èñåë, äåëÿùèõñÿ íà 7
*/

main(){
    int sum = 0;
    for (int i = 1; i <= 1000; i += 4){
        if (i % 7 ==0 ){
            sum += i;
        }
    }
    std::cout << sum << std::endl;
    return 0
}
