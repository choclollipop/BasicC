#include <stdio.h>
#include "calculateFunc.h"
#include <string.h>
#include "myString.h"

/* 
    函数参数：可有可无 
    函数参数一定要定义其类型
*/

/* 
    函数返回值：
    若没有，写void;
    如果有，则返回你想返回的数据类型{int | long | short | char | short | char | float | double } 
*/

/* 什么是API：Application Programming Interface */

/* 函数的定义 */
#if 0
/* case1:没有参数，没有返回值 */
void purchaseAppointerThing()
{
    printf("purchase a phone\n");
}
#endif

#if 0
// case2:有参数，没有返回值
void myAddNum(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum = %d\n", sum);
} 

#endif

#if 0
// case3:有参数有返回值
/* 函数参数一定有数据类型 */
int myAddNum(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum = %d\n", sum);
    return sum;
} 

#endif

/* 函数 */
void printStr()
{
    printf("hello world\n");
}

/* 计算传入参数 */
int calStr(const char * str)
{
    if(!str)
    {
        return 0;
    }

    /* 给str指针做备份，防止由于str偏移后，导致无法释放该指针 */
    const char * tmpPtr = str;
    int count = 0;
    while(*tmpPtr != '\0')
    {
        count++;
        tmpPtr++;
    }

    printf("func str:%s\n", str);    //此时什么都不打印，因为str指针已经指向了'\0'字符

    return count;
}

int main()
{

#if 0
    int num1 = 5;
    int num2 = 10;
    // printf("num1:%d\n", num1);

    /* 函数的调用 */
    // purchaseAppointerThing();

    int result = myAddNum(num1, num2);

    if(result > 10)
    {
        printf("i get a thing\n");
    }
    else
    {
        printf("i did not get a thing\n");
    }

#endif

#if 0
    int num1 = 50;
    int num2 = 60;
    int sum = calculateAdd(num1, num2);
    printf("sum:%d\n", sum);

    int sub = calculateSub(num1, num2);
    printf("sub:%d\n", sub);

    int mul = calculateMul(num1, num2);
    printf("mul:%d\n", mul);

    int div = calculateDiv(num1, num2);
    printf("div:%d\n", div);
#endif

#if 0
    char array[100] = "hello world";
    int len = myStringlen(array);
    printf("len=%d\n", len);

    myStringcat(array, "nihao");
    printf("%s\n", array);

    myStringcpy(array,"1234");
    printf("%s\n", array);

    int ret = myStringcmp("hello","helloa");
    printf("ret = %d\n", ret);
#endif

#if 0
    char * ptr = NULL;
    int len = 0;

    #if 0

    len = strlen(ptr);
    #else

    len = myStringlen(ptr);
    #endif

    printf("len : %d\n", len);

#endif

#if 0 
    int choice = 0;

    /* 函数指针就是钩子函数，主要用在回调函数中 */
    void (*func)() = printStr;
    func();

    if(choice == 1)
    {
        printStr();
    }
#endif

    char * buffer = "hello world";

    int len = calStr(buffer);
    printf("len:%d\n", len);

    return  0;
}