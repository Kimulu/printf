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
