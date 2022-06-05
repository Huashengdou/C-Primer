/*
*   20:读取销售记录，然后打印到标准输出
*   21:读取两个对象，输出他们的和
*/
#include <iostream>
#include "Sales_item.h"

int main(int argc, char const *argv[])
{
    /* 20 */
    Sales_item book;

    std::cin >> book;

    std::cout << book << std::endl;
    
    //21
    Sales_item b1, b2;
    
    std::cin >> b1 >> b2;
    std::cout << b1 + b2 << std::endl;
    
    return 0;
}
