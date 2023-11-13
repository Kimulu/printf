#include "main.h"
/**
 * print_hex_upper - print an unsigned integer in uppercase hexadecimal.
 * @val: arguments.
 * Return: the number of hexadecimal digits printed.
 */
int print_hex_upper(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int num_digits = 0;

	num_digits += print_hex_recursive_upper(num);

	return (num_digits);
}
