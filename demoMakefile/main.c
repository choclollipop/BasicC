#include <stdio.h>

int printString()
{
    int ret = 0;
    printf("print string\n");
    return 0;
}

int main()
{
    int num1 = 10;
    printf("num1:%d\n", num1);
    printString();

    return 0;
}