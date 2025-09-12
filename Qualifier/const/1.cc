class Example
{
private:
    int value;

public:
    // 以下两个函数是等价的：

    void func1() const
    {
        // this指针类型：const Example* const this
        // 不能修改成员变量
        // value = 10;  // ❌ 错误
    }

    // 编译器实际处理为：
    //@remind 所以不能用static关键词修饰
    /*
    void func2(const Example *const this)
    {
        // this->value = 10;  // ❌ 错误
    }
    */
};