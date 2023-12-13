#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 32
int main()
{

#if 0
    /* 1.指针怎么定义 */
    int a = 0;
    long b = 0;

    /* 指针的定义 */
    int * p = NULL;

#endif

#if 0
    /* 指针使用：指针内存存放的是某变量的地址 */
    int a = 5;
    int * p = &a;

    printf("a : %d\n", a);
    printf("&a : %p\n", &a);

    printf("*p :%d\n", *p);
    printf("p = %p\n", p);
    printf("&p:%p\n", &p);

    int * ptr = &p;
    printf("p:%p\n", ptr);
#endif

#if 0
    /* 指针特性2：指针和字符串 */
    /* 字符串是区别与字符数组的。 */

    char * ptr1 = "hello world";

    int len = sizeof(ptr1);
    printf("len : %d\n", len);

    /* 怎么判断字符串长度 */
    len = strlen(ptr1);
    printf("len : %d\n", len);

    /* 字符数组的赋值 */
    char name[BUFFER_SIZE] = { 0 };
    strcpy(name, "zhangsan");
    printf("name:%s\n", name);

    /* 字符串赋值 */
    char * ptr2 = NULL;
    // ptr2 = "zhangsan";
    // printf("%s\n", ptr2);

    strcpy(ptr2, "zhangsan");
    printf("ptr2:%s", ptr2);
#endif

    /* 堆空间 */
    /* void * 是一个指针，这个指针被称为万能指针 */
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    strcpy(ptr, "zhangsan");
    printf("ptr:%s\n", ptr);

    return 0;
}