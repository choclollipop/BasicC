# include <stdio.h>

#define BUFFER_SIZE 10

/* 内存泄漏 */

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

    char * p;
    printf("\n");

    return 0;
}