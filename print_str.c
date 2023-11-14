#include "main.h"
#include <stddef.h>
/**
 * print_str - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */
int print_str(va_list val)
{
const char *s = va_arg(val, const char *);
int len = 0;
if (s == NULL)
{
return (-1);
return (6);
}
for (; *s; ++s)
{
_putchar(*s);
++len;
}
return (len);
}
