#include <stdio.h>

#if 1

    /* 值传递和地址传递 */
    /* 函数参数叫形参 */
    /* 函数的参数不是指针时，就是值传递 */
    /* 当我们想要改变实参的值时，就需要传递地址*/
    int swapData(int val1, int val2)
    {
        int tmp = val1;
        val1 = val2;
        val2 = val1;
    }

    /* 当整数做你形参的时候，一定是传出参数 */
    int swapRealData(int * pVal1, int * pVal2)
    {
        int tmp = *pVal1;
        *pVal1 = *pVal2;
        *pVal2 = *pVal1;
    }

    /* 什么是传入参数？ */
    /* 什么时候用传入参数？ 
        当你不想改变实参的值时，就用传入参数
    */
    void printStr(const char * str)
    {
        printf("str : %s\n", str);
        printf("after str : %s\n", str);
        return ;
    }


#endif

    /* conclusion:
        字符串：形参不加const就是传出参数（就是要被修改的值）；加上const就是传入参数（不能被改变的值）
        整数：加上指针就是传出参数（就是要被改变的值）；不加指针就是传入参数（可以被修改，但修改不影响实参的值）
    */

int main()
{

#if 1
    int num1 = 100;
    int num2 = 200;

    /* 调用函数的参数叫实参 */
    swapData(num1, num2);
    printf("num1:%d\tnum2:%d", num1, num2);

    /* 传出参数一定会改变实参的值：（即如果想要改变实参的值，就需要使用传出参数）*/
    swapRealData(&num1, &num2);
    printf("after:num1:%d\tafter:num2:%d", num1, num2);

#endif

    char * str = "hello world";

    printStr(str);

    return 0;
}