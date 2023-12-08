#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/* 数据类型 */
int main()
{

#if 0
    int age = 6;
    int len = sizeof(age);

    printf("len = %d, age = %d\n", len, age);

#if 0
    float weight = 50.5;   //float浮点型占四个字节
    len = sizeof(weight);
    printf("len = %d , weight = %f \n", len, weight);

#else
    double weight = 50.5;
    len = sizeof(weight);
    printf("len = %d , weight = %f \n", len, weight);  //%f 打印浮点数

#endif

    char sex = 'm';
    len = sizeof(sex);
    printf("len = %d , sex = %c \n", len, sex);     //%c 打印单个字符

#endif

#if 0
    /* 有符号数，无符号数 */
    char sex = -1;
    int len = sizeof(sex);
    printf("len = %d , sex = %c , sex = %d\n", len, sex, sex);     //%c 打印单个字符

    char default_value = 137;
    len = sizeof(default_value);
    printf("len = %d , default_value = %c , default_value = %d\n", len, default_value, default_value);     //%c 打印单个字符

    /* 无符号数 */
    unsigned char sex_Value = -1;
    len = sizeof(sex_Value);
    printf("len = %d , sex_Value = %c , sex_Value = %d\n", len, sex_Value, sex_Value);     //%c 打印单个字符


    int val = 10;
    printf("%d\n", val);

    /* 后置++ */
    val++;
    printf("%d\n", val);
    val--;
    printf("%d\n", val);

    /* 前置++ */
    ++val;
    printf("%d\n", val);
    --val;
    printf("%d\n", val);

    val += ++val;
    printf("%d\n", val);


    /* 随机数 */
    int randomVal = rand();
    int lotterRate = randomVal % 4;
    printf("lotterRate:%d\n", lotterRate);


    int sub = 5 << 2;
    printf("sub : %d\n", sub);
#endif    

#if  0
    int contion1 = 1;
    int contion2 = 0;
    if(contion1 || contion2)
    {
        printf("hello\n");
    }
    else
    {
        printf("word\n");
    }
#endif

    return 0;
}