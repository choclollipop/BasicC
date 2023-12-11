#include <stdio.h>

#define BUFFER_SIZE16    16

/* 手写字符串函数 */
int main()
{

#if 0
    /* 字符串 */
    char array[BUFFER_SIZE16] = "hello world";
    /* strlen:获取字符串长度 */
    /* strcpy:复制字符串 */
    /* strcat */
    /* strcmp */

#endif

#if 1
    /* 字符串(常量)位于全局区域不可改 */
    char * ptr = "hello world";

    int size = sizeof(ptr);
    printf("len:%d\n", size);

#endif

    return 0;
}