#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* print_strlen - Function for returning the len of string
* @str: the string
* Return: return a number(length 0f string)from 0 to < 500
*/
int print_strlen(const char *str)
{
int len;
len = 0;
while (*str != '\0')
{
++len;
++str;
}
return (len);
}
