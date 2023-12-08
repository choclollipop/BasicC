#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 状态码 */
enum STATUS_CODE
{
    REGISTER = 1,
    LOGIN,
    QUIT
};

/* 宏定义 */
/* 代码规范：宏定义不能有小写字母 */
#define COUNT_NUM 10
#define RANGE_NUM 200

int main()
{

#if 0
    int budget = 4000;

    int applephone = 8999;
    int mi14pro = 3399;
    int huaweip60 = 7999;

    if(budget > applephone)
    {
        printf("get a applephone\n");
    }
    else if(budget > mi14pro)
    {
        printf("get a mi14pro\n");
    }
    else if(budget > huaweip60)
    {
        printf("get a huaweip60\n");
    }

#endif

#if 0
    int budget = 4000;

    int applephone = 8999;
    int mi14pro = 3399;
    int huaweip60 = 7999;

    if(budget > applephone || budget >mi14pro)
    {
        printf("I am happy, i get a phone\n");
    }
    else 
    {
        printf("I am sad, no phone\n");
    }

#endif

#if 0

    int budget = 6000;


    if(4000 < budget && budget < 5000)
    {
        printf("ok\n");
    }
    else
    {
        printf("no\n");
    }

#endif

/* 代码规范：一个函数尽量不要超过80行，最多不要超过120行 */
#if 0
    /* switch */
    int choice = 0;

    printf("请输入你的选项：");
    scanf("%d", &choice);

    /* 通常情况下，每一个case都有与之对应的break */
    switch(choice)
    {
        case REGISTER:
            {
                /* 如果case中的语句过多，一定要加上{}来包含代码 */
                printf("welcome to register\n");
            }
            break;

        case LOGIN:
            {
                printf("welcome to login\n");
            }
            break;

        case QUIT:
            {
                printf("welcome to quit\n");
            }
            break;

        default:
            printf("input invalid\n");
            break;
    }

#endif

#if 0

    /* for循环 */
    srand(time(NULL));

    /* 代码规范：不要用i，改成idx */
    /* 代码规范：不要用魔鬼数字 */
    int randomNum = 0;
    for(size_t idx = 0; idx < COUNT_NUM; idx++)
    {
        randomNum = rand() % RANGE_NUM + 1;
        printf("%d\n", randomNum);
    }

#endif

#if 0
    /* while 循环 */
    /* 编码规范：变量尽量使用驼峰式命名 */
    int circleTimes = COUNT_NUM >> 1;
    int randomNum = 0;

    srand(time(NULL));
    while(circleTimes--)
    {
        randomNum = rand() % RANGE_NUM + 1;
        printf("%d\n", randomNum);
    }

#endif

#if 1
    /*do-while循环*/
    int varaNum = 0;
    do
    {
        printf("%d\n",varaNum);
    }while(varaNum);

#endif

    return 0;
}