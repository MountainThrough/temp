#include <iostream>
using namespace std;

class Base1
{
public:
    virtual void func1()
    {
        cout << "Base1::func1()" << endl;
    }

    virtual void commonFunc()
    {
        cout << "Base1::commonFunc()" << endl;
    }
};

class Base2
{
public:
    virtual void func2()
    {
        cout << "Base2::func2()" << endl;
    }

    virtual void commonFunc()
    {
        cout << "Base2::commonFunc()" << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    // 重写来自Base1的虚函数
    void func1() override
    {
        cout << "Derived::func1()" << endl;
    }

    // 重写来自Base2的虚函数
    void func2() override
    {
        cout << "Derived::func2()" << endl;
    }

    // 重写两个基类的同名虚函数
    void commonFunc() override
    {
        cout << "Derived::commonFunc()" << endl;
    }
};

int main()
{
    Derived derived;

    // 通过不同基类指针调用
    Base1 *b1 = &derived;
    Base2 *b2 = &derived;

    b1->func1();      // 调用Derived::func1()
    b2->func2();      // 调用Derived::func2()
    b1->commonFunc(); // 调用Derived::commonFunc()
    b2->commonFunc(); // 调用Derived::commonFunc()

    return 0;
}