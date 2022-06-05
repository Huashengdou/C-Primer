#include <iostream>
#include "exerse/Sales_item.h"

/* 执行加操作之前先比较ISBN是否相等*/
int main(int argc, char const *argv[])
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;

    if(item1.isbn() == item2.isbn()){
        std::cout << item1 + item2 << std::endl;
        return 0;
    }else{
        std::cerr << "Data must refer to same ISBN" << std::endl;
        return -1;
    }
}
