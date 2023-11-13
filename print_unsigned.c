#include "main.h"
/**
 * print_unsigned - print an unsigned decimal integer.
 * @val: arguments.
 * Return: the number of decimal digits printed.
 */
int print_unsigned(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int num_digits = 0;

	num_digits += print_number(num);

	return (num_digits);
}
