#include "main.h"
#include <stddef.h>
/**
 * print_str - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */
int print_str(va_list val)
{
char *s;
int len;
int i;
s = va_arg(val, char *);
if (s == NULL)
{
s = "(null)";
}
len = print_strlen(s);
for (i = 0; s[i] != '\0'; ++i)
{
_putchar(s[i]);
}
return (len);
}
