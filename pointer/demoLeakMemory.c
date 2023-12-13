#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 10

/* 内存泄漏 
    1.野指针
    2.malloc分配的堆空间，没有被释放
    3.踩内存

*/

int main()
{
    /* Q1：什么情况下会导致内存泄露 */
    //case 1 : 野指针
#if 0
    int a;
    printf("a:%d\n", a);

    int array[BUFFER_SIZE];
    for(int idx = 0;idx < BUFFER_SIZE; idx++)
    {
        printf("%d\t", array[idx]);
    }
#endif

    // char * p;
    // printf("\n");

    //case 2:
    char * ptr = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    if(!ptr)
    {
        /* todo... */
        /* 状态码 */
        return -1;
    }
    /* 使用malloc分配的空间是脏数据 */

    memset(ptr, 0, sizeof(char) * BUFFER_SIZE);

#if 0
    /* 极度危险的函数, 改用strnpy */
    strcpy(ptr, "hello");

#endif
    /* 使用安全 （记得加结束符，所以需要空间减1，存放结束符）*/
    strncpy(ptr, "hello worldaaaa", BUFFER_SIZE - 1);
    printf("ptr:%s\n", ptr);

    /* 释放指针函数 */
    if(ptr)
    {
        free(ptr);
        ptr = NULL;
    }


    return 0;
}