/*
*   打印给定两个整数之间的所有整数，可处理第一个数比第二个数小的情况
*/

#include <iostream>

int main()
{
    int min = 0, max = 0;
    std::cout << "Please enter two numbers:" << std::endl;
    std::cin >> min >> max;

    if(min <= max){
        while(min <= max){
            std::cout << min << " ";
            ++min;
        }
    }
    else{
        while(max <= min){
            std::cout << max << " ";
            ++max;
        }
    }
    std::cout << std::endl;
    return 0;
}