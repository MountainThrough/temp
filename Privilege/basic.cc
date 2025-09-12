class Base
{
public:
    int pub;

protected:
    int pro;

private:
    int pri;
};
//@remind 继承前的关键字就是改变父类的函数和数据的访问权限
class Derived : public Base
{ // public继承
  // 继承后访问权限不变
  // pub仍然是public
  // pro仍然是protected
  // pri仍然是不可访问
};
class Derived2 : protected Base
{ // protected继承
  // 继承后访问权限变化
  // pub变为protected
  // pro仍然是protected
  // pri仍然是不可访问
};
class Derived3 : private Base
{ // private继承
  // 继承后访问权限变化
  // pub变为private
  // pro变为private
  // pri仍然是不可访问
};

int main()
{
    Derived d;
    //@remind 这就是外部访问
    d.pub = 1; // ✓ 可以访问
    // d.pro = 2;  // ✗ 不能访问
    // d.pri = 3;  // ✗ 不能访问
}