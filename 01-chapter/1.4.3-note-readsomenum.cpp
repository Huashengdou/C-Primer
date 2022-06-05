/*
*   读取数量不定的输入数据
*
*/
#include <iostream>

int main()
{
    int sum = 0, val = 0;
    //当遇到文件结束符或者遇到无效输入（例如输入的值不是一个整数）,istream对象的状态会变为无效
    //从键盘输入文件结束符的方法：Ctrl+D
    while(std::cin >> val){
        sum += val;
    }
    std::cout << "sum is: " << sum << std::endl;

    return 0;
}