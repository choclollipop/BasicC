#include <stdio.h>

#define BUFFER_SIZE 5

#define ROW     3
#define COLUMN  4

int main()
{
    /* 从一维数组到二维数组 */
    int array[BUFFER_SIZE] = {0};
    int len = sizeof(array);
    printf("len :%d\n", len);

    /* 二维数组 */
    int array2[BUFFER_SIZE][BUFFER_SIZE] = {0};
    len = sizeof(array2);
    printf("len :%d\n", len);

    /* 二维数组赋值 */
    int count = 1;
    for(int idx = 0; idx < ROW; idx++)
    {
        for(int sub = 0; sub < COLUMN; sub++)
        {
            array2[idx][sub] = count;
            count++;
        }
    }

    printf("array[0][1]:%d\n", array2[0][1]);

    /* 二维数组的打印 */
    count = 0;
    for(int idx = 0; idx < ROW; idx++)
    {
        for(int sub = 0; sub < COLUMN; sub++)
        {
            printf("array[%d][%d]:%d\t", idx, sub, array2[idx][sub]);
        }
        printf("\n");
    }
    
    printf("\n");

    /* 二维数组的地址 */
    printf("array[0]:%p\n", array2[0]);
    printf("array[1]:%p\n", array2[1]);
    printf("array[2]:%p\n", array2[2]);

    printf("%d\t arry[2][2]: %d\n", array2[2][2], *(*(array2 + 2) + 2));


    return 0;
}