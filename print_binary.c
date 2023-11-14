#include "main.h"
/**
 * print_binary - print an unsigned integer in binary.
 * @val: arguments.
 * Return: the number of binary digits printed.
 */
int print_binary(va_list val)
{
unsigned int num = va_arg(val, unsigned int);
int num_digits = 0;
if (num == 0)
{
_putchar('0');
num_digits++;
}
else
{
num_digits += print_b_recursive(num);
}
return (num_digits);
}

/**
 * print_b_recursive - helper function
 * @num: the unsigned integer to print.
 * Return: the number of binary digits printed.
 */
int print_b_recursive(unsigned int num)
{
int num_digits = 0;
if (num / 2)
{
num_digits += print_b_recursive(num / 2);
_putchar(num % 2 + '0');
num_digits++;
}
return (num_digits);
}
