/*
1. C++语言并未定义任何输入输出语句，但是包含了一个全面的标准库iostream来提供IO机制；
2. 标准库定义了四个IO对象。标准输入：cin;标准输出：cout;标准错误：输出警告和错误cerr;输出一般性信息：clog;
3. cin，数据将从程序正在运行的窗口读入；当向cout、cerr、clog写入数据时，将会写到同一个窗口；
4. main函数第一句中的endl，被称为操纵符（manipulator）的特殊值。写入endl的效果是结束当前行，并将与设备关联的缓冲区buffer中的内容刷到设备中。
5. 缓冲刷新操作可以保证到目前为止程序所产生的所有输出都真正写入输出流中，而不仅停留在内存中等待写入流。
6. 程序员常常在调试时添加打印语句。这类语句应该保证“一直”刷新流。否则如果程序崩溃，输出可能还停留在缓冲区中，从而导致关于程序崩溃位置的错误推断！
*/
#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << std::endl;

    return 0;
}