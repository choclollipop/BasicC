#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 10

int main()
{

#if 0
    /* 定义数组后，若不初始化数组且不赋值给数组，则数组所在的内存地址很可能是脏数据 */
    /* 初始化方法
        1.定义初始化
        2.使用初始化函数
        */
    int array[BUFFER_SIZE];

    /* 方法一：初始化 */
    int array1[BUFFER_SIZE] = { 0 };

    /* 方法二：初始化函数 */
    int array2[BUFFER_SIZE];
    memset(array,0,sizeof(array));

    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d] = %d\n", idx, array[idx]);
    }

    /* 地址 */
    printf("%p\n", &array[0]);
    printf("%p\n", &array[1]);
    printf("%p\n", &array);

#endif


    return 0;
}