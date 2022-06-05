#include <iostream>

/*
*   循环打印10到0之间的整数
*/
int main()
{
    int i = 10;
    while(i >= 0){
        std::cout << i << " ";
        --i;
    }
    std::cout << std::endl;
    return 0;
}