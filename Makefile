# Makefile for 两数相加项目

# 编译器设置
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -O2

# 目标文件
TARGET = add_two_numbers
SOURCE = add_two_numbers.cpp
HEADER = add_two_numbers.h

# 默认目标
all: $(TARGET)

# 编译目标
$(TARGET): $(SOURCE) $(HEADER)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCE)

# 运行程序
run: $(TARGET)
	./$(TARGET)

# 清理生成的文件
clean:
	rm -f $(TARGET)

# 重新编译
rebuild: clean all

# 显示帮助信息
help:
	@echo "可用的命令:"
	@echo "  make        - 编译程序"
	@echo "  make run    - 编译并运行程序"
	@echo "  make clean  - 清理生成的文件"
	@echo "  make rebuild- 重新编译"
	@echo "  make help   - 显示此帮助信息"

# 声明伪目标
.PHONY: all run clean rebuild help
