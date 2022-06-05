/*
*   读取多个相同的ISBN销售记录，输出所有记录的和
*/
#include <iostream>
#include "Sales_item.h"

int main(int argc, char const *argv[])
{
    Sales_item book, sum;

    while(std::cin >> book){
        sum = sum + book;
    }
    std::cout << sum << std::endl;

    return 0;
}
