#include <stdio.h>
#include "add.h"
#include "div.h"

int main()
{
    int num1 = 10;
    int num2 = 5;

    int ret = mydiv(num1, num2);
    printf("ret : %d\n", ret);

    return 0;
}