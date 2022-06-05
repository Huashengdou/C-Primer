/*
*   使用文件重定向语句
*   “$addItems < infile > outfile”
*   addItems代表要运行的程序
*   infile代表输入的数据
*   outfile代表输出的数据
*   < >分别是重定向符号
*/
#include <iostream>
#include "exerse/Sales_item.h"

int main()
{
    /* 读入一个对象，然后输出 */
    Sales_item book;
    std::cin >> book;

    std::cout << book << std::endl;

    /* 将两个对象相加 */
    Sales_item item1, item2;
    std::cin >> item1 >> item2;

    std::cout << item1 + item2 << std::endl;

    return 0;
}