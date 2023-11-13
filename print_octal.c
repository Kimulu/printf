#include "main.h"
/**
 * print_octal - prints an unsigned integer in octal
 * @val: arguments
 * Return: the number of octal digits printed
 */
int print_octal(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int num_digits = 0;

	num_digits += print_octal_recursive(num);

	return (num_digits);
}
/**
 * print_octal_recursive - helper function
 * @num: the unsigned integer to print.
 * Return: the number of octal digits printed.
 */
int print_octal_recursive(unsigned int num)
{
	int num_digits = 0;

	if (num / 8)
		num_digits += print_octal_recursive(num / 8);
	else if (num_digits == 0)
		_putchar('0');

	_putchar(num % 8 + '0');
	num_digits++;

	return (num_digits);
}
