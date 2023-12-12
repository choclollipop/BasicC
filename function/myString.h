#ifndef __MY_STRING_H_
#define __MY_STRING_H_

/* 获取字符串长度 */
int myStringlen(const char * string);

/* 字符串拷贝 */
int myStringcpy(char * array, const char * string);

/* 字符串拼接 */
int myStringcat(char * array, const char * string);

/* 字符串比较 */
int myStringcmp(const char * string1, const char * string2);

#endif //__MY_STRING_H_