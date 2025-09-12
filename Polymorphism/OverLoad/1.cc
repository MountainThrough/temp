#include <iostream>
using namespace std;

class Calculator
{
public:
    // 重载add函数
    int add(int a, int b)
    {
        cout << "调用 int add(int, int)" << endl;
        return a + b;
    }
    //@remind 函数参数不同返回值就可以不一样
    double add(double a, double b)
    {
        cout << "调用 double add(double, double)" << endl;
        return a + b;
    }

    int add(int a, int b, int c)
    {
        cout << "调用 int add(int, int, int)" << endl;
        return a + b + c;
    }
};

int main()
{
    Calculator calc;

    cout << calc.add(1, 2) << endl;     // 调用int版本
    cout << calc.add(1.5, 2.3) << endl; // 调用double版本
    cout << calc.add(1, 2, 3) << endl;  // 调用三参数版本
    return 0;
}