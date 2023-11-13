#include "main.h"
/**
 * print_hex - print an unsigned integer in lowercase hexadecimal.
 * @val: arguments.
 * Return: the number of hexadecimal digits printed.
 */
int print_hex(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int num_digits = 0;

	num_digits += print_hex_recursive(num);

	return (num_digits);
}
/**
 * print_hex_recursive - helper function
 * @num: the unsigned integer to print.
 * Return: the number of hexadecimal digits printed.
 */
int print_hex_recursive(unsigned int num)
{
	int num_digits = 0;

	if (num / 16)
		num_digits += print_hex_recursive(num / 16);

	int remainder = num % 16;

	if (remainder < 10)
		_putchar(remainder + '0')
	else
		_putchar(remainder - 10 + 'a');

	num_digits++;

	return (num_digits);
}
