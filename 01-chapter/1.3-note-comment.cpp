#include <iostream>
//1. 注释界定符不能嵌套
/*
* 简单主函数：
* 读取两个数，并对他们求和
*/
int main()
{
    //提示用户输入两个数
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;//保存输入的数
    std::cin >> v1 >> v2;//读取数据
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << std::endl;

    return 0;
}