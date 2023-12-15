#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 5

int main()
{

#if 0

    /* 数组：
        1.一块连续的存储空间
        2.数组是存储相同的数据类型
     */

#endif

#if 0
    /* 字符串数组 */
    char name[BUFFER_SIZE] = {0};
    memeset(name, 0, sizeof(name));

    /* 不可以这么赋值 */
    // name = "zhangsan";

    /* 赋值方法 */
    strcnpy(name, "zhangsan", sizeof(name) - 1);
    /* name[BUFFER_SIZE] = "zhangsan" */

    printf("name[1]: %c\n", name[1]);
    name[1] = 'H';
    printf("name:%s\n", name);

    printf("*(name + 2):%c\n", *(name + 2));
    *(name + 2) = 'A';
    printf("name:%s\n", name);


    /* 总结：指针数组不分家
        name[idx] = *(name + idx) idx为常量
    */

#endif

#if 0

    char *ptr = "zhangsan";

    /* 指针即数组 */
    printf("ptr[1]:%c\n", ptr[1]);
    // ptr[1] = *(ptr + 1);
    printf("*(ptr + 2):%c\n", *(ptr + 2));

    ptr[0] = 'Z';
    printf("ptr:%c\n", ptr[0]);

    /* cloclusion:
        字符数组和字符串的区别：
            1.内存：
                字符数组：内存存在栈区，可以被修改
                字符串：内存存在全局数据区，不可以被修改
    */

#endif

    /* 字符串数组 */
    char * array[BUFFER_SIZE];
    memset(array, 0, sizeof(array));

    array[0] = "hello";
    array[1] = "world";
    array[2] = "nihao";
    array[3] = "zhangsan";
    array[4] = "china";

    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d] = %s\n", idx, array[idx]);
    }
    /*字符串数组：
        1.它是一个数组
        2.存放的是字符串
    */



    return 0;
}