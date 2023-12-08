#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 10

int main()
{

#if 0
    /* 数组的越界访问 */
    /* 判断索引的有效性 */
    int array[BUFFER_SIZE];   //静态数组

    memset(array,0,sizeof(array));

    /* 数组下标必须处于合理的范围：[0 ~ BUFFER_SIZE -1] */
    printf("array[-5] = %p\n", &array[-5]);
    printf("array[15] = %d\n", array[15]);

#endif

    /* 动态数组 */

    return 0;
}