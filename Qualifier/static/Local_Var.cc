#include <iostream>
using namespace std;

void counter_function()
{
    static int count = 0;            // 只初始化一次
    static bool initialized = []() { // C++11 lambda初始化
        cout << "Static变量初始化" << endl;
        return true;
    }();

    //@remind 本质
    /*    static int count;           // 初始值为0
    static bool initialized; // 初始值为false

    // 编译器添加的初始化检查代码
    static bool count_initialized = false;
    static bool initialized_initialized = false;

    if (!count_initialized)
    {
        count = 0; // 真正的初始化
        count_initialized = true;
    }

    if (!initialized_initialized)
    {
        // 执行lambda并赋值
        initialized = []()
        {
            cout << "Static变量初始化" << endl;
            return true;
        }();
        initialized_initialized = true;
    } */
    count++;
    cout << "调用次数: " << count << endl;
}

int main()
{
    counter_function(); // 输出初始化信息 + 调用次数: 1
    counter_function(); // 只输出调用次数: 2
    counter_function(); // 只输出调用次数: 3

    return 0;
}