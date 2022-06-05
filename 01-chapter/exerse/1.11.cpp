/*
*   打印给定两个整数之间的所有整数
*/

#include <iostream>

int main()
{
    int min = 0, max = 0;
    std::cout << "Please enter two numbers(min,max):" << std::endl;
    std::cin >> min >> max;
    if(max < min){
        std::cout << "Max must be bigger than min" << std::endl;
        return -1;
    }
    while(min <= max){
        std::cout << min << " ";
        ++min;
    }
    std::cout << std::endl;
    return 0;
}