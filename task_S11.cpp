#include <iostream>
/*
S11: Öèêëè÷åñêèé ïåðåáîð ÷èñåë îò 0 äî 100
è âûâîä ÷èñåë, äåëÿùèõñÿ íà 3
*/

main() {
    for (int i = 0; i <= 100;++i){
        if(i % 3 == 0){
        std::cout << i << std::endl;
        }
    }
    return 0
}
