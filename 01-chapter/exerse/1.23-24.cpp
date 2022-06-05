/*
*   读取多条销售记录，并统计每个ISBN有几条
*/
#include <iostream>
#include "Sales_item.h"

int main(int argc, char const *argv[])
{
    int cnt = 1;
    Sales_item cur_book, book;
    if(std::cin >> cur_book){
        while(std::cin >> book){
            if(cur_book.isbn() == book.isbn()){
                ++cnt;

            }else{
                std::cout << cur_book.isbn() << " appear " << cnt 
                          << " times " << std::endl;
                cnt = 1;
                cur_book = book;
            }
        }
        std::cout << cur_book.isbn() << " appear " << cnt 
                  << " times " << std::endl;
    }
    return 0;
}
