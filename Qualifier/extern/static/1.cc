int global_var = 10;           // 外部链接性 - 可以被其他文件访问
static int internal_var = 20;  // 内部链接性 - 仅本文件可见

void global_func() {}          // 外部链接性
static void internal_func() {} // 内部链接性