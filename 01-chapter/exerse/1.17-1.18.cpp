/*
*   输入的所有值都相等，程序并不会输出，而是在等文件结束符，Ctrl+D以后可看到执行后的结果
*   输入没有重复的值，程序会一直输出，但是程序并未结束，且最后一个值并未打印次数，此时也需要给程序文件结束符，Crtl+D后可看到执行的结果
*/

#include <iostream>

int main()
{
    int currVal = 0, val = 0;
    if(std::cin >> currVal){
        int cnt = 1;
        while(std::cin >> val){
            if(val == currVal)
                ++cnt;
            else{
                std::cout << currVal << " occurs "
                          << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs "
                  << cnt << " times" << std::endl;
    }
    return 0;
}