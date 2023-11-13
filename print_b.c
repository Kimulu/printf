#include "main.h"
/**
 * print_b - print an unsigned integer in binary.
 * @val: arguments.
 * Return: the number of binary digits printed.
 */
int print_b(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int num_digits = 0;

	num_digits += print_binary(num);

	return (num_digits);
}
/**
 * print_binary - helper function to print an unsigned integer in binary.
 * @num: type integer
 * Return: the number of binary digits printed.
 */
int print_binary(unsigned int num)
{
	int num_digits = 0;

	if (num / 2)
		num_digits += print_binary(num / 2);

	_putchar(num % 2 + '0');
	num_digits++;

	return (num_digits);
}
