#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE   10
#define BUFFER_OFFSET 100

/* 函数 */

    /* 函数参数 */
        /* 需求：实现两个数字的交换 */

    /* 此时是值传递：值传递了num1与num2的地址 */

#if 0
    void swapData(int val1, int val2)
    {
        int tmpData = val1;
        val1 = val2;
        val2 = tmpData;

        printf("val1:%d ,val2:%d\n", val1, val2);
    }

    void swapRealData(int *val1, int *val2)
    {
        int tmpData = *val1;
        *val1 = *val2;
        *val2 = tmpData;

        printf("after val1: %d, after val2:%d\n", val1, val2);
    }
#endif

/* 数组做函数参数，会自动弱化为指针 */
#if 0
void printArray(int * array, int numSize)
{

    for(int idx = 0; idx < numSize; idx++)
    {
        printf("array[%d]: %d", idx, array[idx]);
    }

    printf("\n");
}
#endif


int main()
{

#if 0
    int num1 = 100;
    int num2 = 200;

    swapRealData(num1, num2);
    printf("num1:%d ,num2:%d\n", num1, num2);
#endif

    int array[BUFFER_SIZE];

    memser(array, 0, sizeof(array));

    int elementNum = sizeof(array) / sizeof(array[0]);

    for(int idx = 0; idx < elementNum; idx++)
    {
        array[idx] = idx + BUFFER_OFFSET; 
    }

    printArray(array, elementNum);

    return 0;
}