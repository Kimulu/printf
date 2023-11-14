#include "main.h"
/**
 * print_unsigned - prints integer
 * @args: argument to print
 * Return: unsigned number
 */
int print_unsigned(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
int num = n;
int digit, i = 0;
if (n == 0)
{
_putchar('0');
return (1);
}
while (num != 0)
{
num /= 10;
i++;
}
while (i > 0)
{
i--;
digit = (n / power(10, i)) % 10;
_putchar(digit + '0');
}
return (n);
}
/**
 * power - calculate powers of 10
 * @base: type int
 * @exponent: type int
 * Return: result
 */
unsigned int power(unsigned int base, unsigned int exponent)
{
unsigned int result = 1;
while (exponent > 0)
{
result *= base;
exponent--;
}
return (result);
}
