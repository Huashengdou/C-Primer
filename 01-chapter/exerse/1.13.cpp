/*
*   for循环实现练习9-11
*/
#include <iostream>

int main()
{
    int sum = 0;
    //练习9，50到100整数相加
    for(int i = 50; i <= 100; i++)
        sum += i;
    std::cout << "Sum of 50 to 100 is " << sum
              << std::endl;
              
    //练习10，递减顺序打印10到0
    for(int i = 10; i >= 0; --i)
        std::cout << i << " ";
    std::cout << std::endl;

    //练习11，打印指定两数之间的所有整数
    int v1 = 0, v2 = 0;
    std::cout << "Please enter two numbers(min,max):";
    std::cin >> v1 >> v2;
    if(v1 > v2){
        std::cout << "max is bigger than min!!" << std::endl;
        return -1;
    }
    for(int i = v1; i <= v2; ++i)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}