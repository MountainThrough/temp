#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    Animal() : age(0) { cout << "Animal构造" << endl; }
    void showAge() { cout << "Age: " << age << endl; }
};

// 虚继承
class Mammal : virtual public Animal
{
public:
    Mammal() { cout << "Mammal构造" << endl; }
};

class Bird : virtual public Animal
{
public:
    Bird() { cout << "Bird构造" << endl; }
};

class Bat : public Mammal, public Bird
{
public:
    Bat() { cout << "Bat构造" << endl; }
};
//@info 虚继承是为了解决多个相同基类的问题，正常如果没有virtual关键字bat.age访问不了，因为不知道访问那个animal
int main()
{
    Bat bat;

    // 现在没有二义性了
    bat.age = 5;   // ✓ 正确
    bat.showAge(); // ✓ 正确

    cout << "Bat对象大小: " << sizeof(bat) << endl;

    return 0;
}