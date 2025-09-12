extern int global_var;   // ✓ 可以声明并使用
extern int internal_var; // ❌ 链接错误

int main()
{
    global_var = 100;   // ✓ 可以访问
    internal_var = 200; // ❌ 无法访问
    return 0;
}