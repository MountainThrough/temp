#include <iostream>
using namespace std;
class Base
{
public:
    Base(long x)
        : _base(x)
    {
    }
    virtual void display()
    {
        cout << "Base::display()" << endl;
    }
    virtual void pureFunc() = 0;

private:
    long _base;
};

class Derived
    : public Base
{
public:
    Derived(long base, long derived)
        : Base(base), _derived(derived)
    {
    }
    //@remind 即使没有virtual关键字和override关键字也仍然是虚函数，因为函数形式一样
    //@remind 子类不一定要实现父类的虚函数
    void display()
    {
        cout << "Derived::displlllllllay()" << endl;
    }
    //@remind 纯虚函数（抽象）类不能创建对象，只要有纯虚函数就是抽象类
    //@info 抽象类还包括构造函数是protected的类
    virtual void pureFunc()
    {
        cout << 1;
    }

private:
    long _derived;
};
void test0()
{
    Base *base = new Derived(1, 2);
    Derived *de = new Derived(1, 2);
    base->display();
    //@info 动态绑定
    base->Base::display();
    //@remind 这是静态绑定,就相当于将base指针作为this指针传给Base的display函数,不是通过调用base指针来执行函数
    de->Base::display();
}
int main()
{
    test0();
    return 0;
}
