#include "myString.h"

/* 状态码 */
enum STATUS_CODE
{
    ON_S1GREATER = 1,
    ON_S2GREATER = -1,
    ON_EQUAL = 0,

} STATUS_CODE;

/* 获取字符串长度 */
int myStringlen(const char * string)
{
    int len = 0;
    if(!string)
    {
        return 0;
    }

    while(*string != '\0')
    {
        len++;
        string++;
    }

    return len;
}

/* 字符串拷贝 */
int myStringcpy(char * array, const char * string)
{
    int strLen = myStringlen(string);

    for(int idx = 0; idx < strLen; idx++)
    {
        *(array + idx) = *(string + idx);
        if(idx == strLen - 1)
        {
            *(array + strLen) = '\0';
        }
    }

    return 0;
}

/* 字符串拼接 */
int myStringcat(char * array, const char * string)
{
    int len = myStringlen(array);
    int strLen = myStringlen(string);

    for(int idx = 0; idx < strLen; idx++)
    {
        *(array + len + idx) = *(string + idx);
    }

    return 0;
}

/* 字符串比较 */
int myStringcmp(const char * string1, const char * string2)
{
    int cmp;
    int lenStr1 = myStringlen(string1);
    int lenStr2 = myStringlen(string2);

    if(lenStr1 <= lenStr2)
    {
        cmp = lenStr2;
    }
    else
    {
        cmp = lenStr1;
    }

    for(int idx = 0; idx < cmp; idx++)
    {
        /* 如果字符串s2大，则返回-1 */
        if(*(string1 + idx) < *(string2 + idx))
        {
            return ON_S2GREATER;
        }
        else if(*(string1 + idx) > *(string2 + idx))
        {
            return ON_S1GREATER;
        }
        else if(*(string1 + idx) =='\0' && *(string2 + idx) == '\0')
        {
            return ON_EQUAL;
        }
        else
        {
            if(lenStr1 < lenStr2)
            {
                return ON_S2GREATER;
            }
            else
            {
                return ON_S1GREATER;
            }
        }
    }

    return 0;
}
