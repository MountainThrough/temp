# 两数相加项目

这是一个简单的C++项目，实现了两数相加的功能，支持整数、浮点数和长整数类型。

## 文件结构

- `add_two_numbers.h` - 头文件，包含函数声明
- `add_two_numbers.cpp` - 源文件，包含函数实现和测试代码
- `Makefile` - 编译配置文件
- `README.md` - 项目说明文档

## 功能特性

### 支持的数据类型
- **整数** (`int`): 基本的两数相加
- **浮点数** (`double`): 支持小数相加
- **长整数** (`long long`): 支持大数相加

### 函数接口
```cpp
int addTwoNumbers(int a, int b);                    // 整数相加
double addTwoNumbersDouble(double a, double b);     // 浮点数相加
long long addTwoNumbersLong(long long a, long long b); // 长整数相加
```

## 编译和运行

### 使用Makefile编译
```bash
# 编译程序
make

# 编译并运行
make run

# 清理生成的文件
make clean

# 重新编译
make rebuild

# 显示帮助信息
make help
```

### 手动编译
```bash
g++ -std=c++11 -Wall -Wextra -O2 -o add_two_numbers add_two_numbers.cpp
```

### 运行程序
```bash
./add_two_numbers
```

## 测试用例

程序包含以下测试用例：

### 整数测试
- `5 + 3 = 8`
- `-10 + 7 = -3`
- `0 + 0 = 0`

### 浮点数测试
- `3.14 + 2.86 = 6.0`
- `-1.5 + 2.5 = 1.0`

### 长整数测试
- `1000000000 + 2000000000 = 3000000000`

## 示例输出

```
=== 两数相加测试 ===
整数相加测试:
5 + 3 = 8
-10 + 7 = -3
0 + 0 = 0

浮点数相加测试:
3.14 + 2.86 = 6
-1.5 + 2.5 = 1

长整数相加测试:
1000000000 + 2000000000 = 3000000000

所有测试完成！
```

## 扩展功能

这个项目可以进一步扩展：
- 支持更多数据类型（如复数）
- 添加输入验证
- 实现命令行参数支持
- 添加单元测试框架
- 支持多语言版本

## 许可证

本项目采用MIT许可证。
