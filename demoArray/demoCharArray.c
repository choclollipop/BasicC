#include <stdio.h>

#define BUFFER_SIZE 10

int main()
{

#if 0
    char array[BUFFER_SIZE] = {0};

    int len = sizeof(array);
    printf("len : %d\n", len);

    len = sizeof(array[0]);
    printf("len : %d\n", len);

    /* 获取数组有多少个元素：数组总长度 / 每个元素的长度 */

#endif

#if 0

    /* 字符数组 */


    /* 代码规范：只要是指针的变量定义，第一个字母需要是p开头 */
    /* 字符串 */
    char * ptr = "hello word";
    printf("ptr: %s \n", ptr);

    /* 字符数组 */
    char buffer[] = {'h','e','l','l','o','w','o','r','l','d'};

#endif

#if 1

    /* 两种方式的区别是第一种没有'\0',第二种有'\0' */
    char buffer[] = {'h','e','l','l','o','w','o','r','l','d'};
    char buffer1[] = "helloworld";

    int len = sizeof(buffer);
    int len1 = sizeof(buffer1);

    printf("buffer : %d, buffer1 : %d\n", len, len1);
    printf("buffer : %s, buffer1 : %s\n", buffer, buffer1);


#endif


    return 0;
}