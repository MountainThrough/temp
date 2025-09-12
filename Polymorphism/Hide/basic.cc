#include <iostream>
using namespace std;
//@remind 无论函数参数是否相同，只要函数名相同且不是override都是隐藏
// 父类
class A
{
public:
    virtual void fun(int a)
    {
        cout << "A中的fun函数" << endl;
    }
};
// 子类
class B : public A
{
public:
    // 隐藏父类的fun函数
    void fun(int a, int b)
    {
        cout << "B中的fun函数" << endl;
    }
};
int main()
{
    B b;
    b.fun(2, 3); // 调用的是B中的fun函数
    b.A::fun(2); // 调用A中fun函数
    return 0;
}
