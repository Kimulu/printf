#include "main.h"
/**
 * print_number - prints an integer.
 * @n: the integer to print
 * Return: the number of digits printed
 */
int print_number(int n)
{
int digit, i = 0;
int reverse;
if (n < 0)
{
_putchar('-');
n = -n;
i++;
}

if (n == 0)
{
_putchar('0');
return (1);
}
reverse = 0;
while (n != 0)
{
digit = n % 10;
reverse = reverse * 10 + digit;
n /= 10;
}
while (reverse != 0)
{
digit = reverse % 10;
_putchar(digit + '0');
reverse /= 10;
i++;
}
return (i);
}
/**
 * print_d - prints decimal
 * @args: argument to print
 * Return: integer
 */
int print_d(va_list args)
{
int n = va_arg(args, int);
return (print_number(n));
}
/**
 * print_i - prints integer
 * @args: argument to print
 * Return: integer
 */
int print_i(va_list args)
{
int n = va_arg(args, int);
return (print_number(n));
}

