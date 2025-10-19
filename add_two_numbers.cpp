#include "add_two_numbers.h"
#include <iostream>
#include <stdexcept>

/**
 * 两数相加函数实现（整数版本）
 * @param a 第一个数
 * @param b 第二个数
 * @return 两数之和
 */
int addTwoNumbers(int a, int b) {
    return a + b;
}

/**
 * 两数相加函数实现（浮点数版本）
 * @param a 第一个浮点数
 * @param b 第二个浮点数
 * @return 两数之和
 */
double addTwoNumbersDouble(double a, double b) {
    return a + b;
}

/**
 * 两数相加函数实现（长整数版本）
 * @param a 第一个长整数
 * @param b 第二个长整数
 * @return 两数之和
 */
long long addTwoNumbersLong(long long a, long long b) {
    return a + b;
}

/**
 * 测试函数
 */
void testAddTwoNumbers() {
    std::cout << "=== 两数相加测试 ===" << std::endl;
    
    // 测试整数相加
    std::cout << "整数相加测试:" << std::endl;
    std::cout << "5 + 3 = " << addTwoNumbers(5, 3) << std::endl;
    std::cout << "-10 + 7 = " << addTwoNumbers(-10, 7) << std::endl;
    std::cout << "0 + 0 = " << addTwoNumbers(0, 0) << std::endl;
    
    // 测试浮点数相加
    std::cout << "\n浮点数相加测试:" << std::endl;
    std::cout << "3.14 + 2.86 = " << addTwoNumbersDouble(3.14, 2.86) << std::endl;
    std::cout << "-1.5 + 2.5 = " << addTwoNumbersDouble(-1.5, 2.5) << std::endl;
    
    // 测试长整数相加
    std::cout << "\n长整数相加测试:" << std::endl;
    std::cout << "1000000000 + 2000000000 = " << addTwoNumbersLong(1000000000LL, 2000000000LL) << std::endl;
    
    std::cout << "\n所有测试完成！" << std::endl;
}

/**
 * 主函数
 */
int main() {
    testAddTwoNumbers();
    return 0;
}
