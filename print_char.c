#include "main.h"

/**
 * print_char - prints a character.
 * @val: arguments
 * Return: returns 1.
 */
int print_char(va_list val)
{
char c = (char)va_arg(val, int);
_putchar(c);
return (1);
}
