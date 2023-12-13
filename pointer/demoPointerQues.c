#include <stdio.h>
#include <string.h>

int main()
{
    /* 指针和字符串 */
    char *ptr = "hello world";

    /* Q1:什么是字串常量 */
    /* 1.打印字符串的每一个字符 */
    /* 方法一：使用for循环的方式 */

#if 0
    /* 打印不全的原因:ptr在移动，所以strlen在一直减少，所以打印不全 */
    for(int idx = 0; idx < strlen(ptr); idx++)
    {
        printf("%c", *ptr);
        ptr++;
    }

    int len = strlen(ptr);
    for(int idx = 0; idx < len; idx++)
    {
        printf("%c", *(ptr + idx));
    }
#endif

#if 1
    /* 方式二：while循环*/
    while(*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    printf("\n");
#endif

    return 0;
}