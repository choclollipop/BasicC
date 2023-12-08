#include <stdio.h>

/* 变量的作用域和生命周期*/

/* 代码规范：全局变量定义必须以g（global）开头 */
/* 全局变量：定义在所有函数外部，作用域是程序（进程）退出（结束）才失效 */
int g_num = 10;

/* 静态全局变量 */
static int g_vara = 20;

int main()
{
    /* 只要变量定义在函数内部就是局部变量 ：作用域：离开函数就被释放（失效）.*/
    int localVara = 5;

    /* 代码规范：在栈空间开辟的内存不得超过8M. 如果超过8M，会发生栈溢出（stack overflow）*/
    int array[100];


    return 0;
}