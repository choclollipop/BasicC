#include <stdio.h>

/* 函数 */

    /* 函数参数 */
        /* 需求：实现两个数字的交换 */
    void swapData(int val1, int val2)
    {
        int tmpData = val1;
        val1 = val2;
        val2 = tmpData;

        printf("val1:%d ,val2:%d\n", val1, val2);
    }

int main()
{
    int num1 = 100;
    int num2 = 200;

    swapData(num1, num2);
    printf("num1:%d ,num2:%d\n", num1, num2);

    return 0;
}