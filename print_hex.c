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
