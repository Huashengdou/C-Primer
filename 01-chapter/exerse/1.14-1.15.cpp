/*
*   1.14 for和while的区别
*   两者可以等效替换；
*   for循环可清楚知道循环的次数，也比较关注；while一般不关注这一点；
*   for循环小括号定义的变量作用域只有循环体内，特别注意；
*/

//1.15
//语法错误
//类型错误
//声明错误
//好习惯：编辑-编译-调试，edit-compile-debug
#include <iostream>

int main()
{
    //语法错误,endl后面使用了冒号
    std::cout << "Read each file." << std::endl:
    //字符串常量两侧漏掉了引号
    std::cout << Update Master << std::endl;
    //漏掉第二个输出运算符
    std::cout << "Write new master." std::endl;
    //return 语句漏掉分号
    return 0
}