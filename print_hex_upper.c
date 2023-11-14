#include "main.h"
/**
 * print_hex_recursive_upper - helper function
 * @num: the unsigned integer to print.
 * Return: the number of hexadecimal digits printed.
 */
int print_hex_recursive_upper(unsigned int num);
/**
 * print_hex_upper - prints a hexadecimal in uppercase
 * @val: arguements
 * Return: hexadecimal in uppercase
 */
int print_hex_upper(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int num_digits = 0;

	num_digits += print_hex_recursive_upper(num);

	return (num_digits);
}
/**
 * print_hex_recursive_upper - helper function
 * @num: the unsigned integer to print.
 * Return: the number of hexadecimal digits printed.
 */
int print_hex_recursive_upper(unsigned int num)
{
	int num_digits = 0;
	int remainder = num % 16;

	if (num / 16)
		num_digits += print_hex_recursive_upper(num / 16);


	if (remainder < 10)
		_putchar(remainder + '0');
	else
		_putchar(remainder - 10 + 'A');

	num_digits++;

	return (num_digits);
}
