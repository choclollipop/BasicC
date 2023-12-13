#include <stdio.h>

#define BUFFER_SIZE 5

void task()
{
    #if 1
    /* 作业1：将数组array3排序 无参数无返回值 */
    int array1[BUFFER_SIZE] = {1, 2, 3, 4, 5};
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array1[%d] = %d\n", idx, array1[idx]);
    }
    printf("\n");

    int array2[BUFFER_SIZE] = {'a', 'b', 'c', 'd', 'e'};
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array2[%d] = %c\n", idx, array2[idx]);
    }
    printf("\n");

    char * array3[BUFFER_SIZE] = {"hello", "world", "nihao", "zhangsan", "lisi"};
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array2[%d] = %s\n", idx, array3[idx]);
    }
    printf("\n");

#endif

}

int main(int argc, const char * argv[])
{
    

    return 0;
}