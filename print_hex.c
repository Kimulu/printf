#include "main.h"
/**
 * print_hex_recursive - Helper function to print hexadecimal recursively.
 * @num: The unsigned integer to print in hexadecimal.
 * Return: The number of hexadecimal digits printed.
 */
int print_hex_recursive(unsigned int num);
/**
 * print_hex - prints a hexadecimal
 * @val: arguements
 * Return: hexadecimal
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
	int remainder;

	if (num / 16)
		num_digits += print_hex_recursive(num / 16);

	remainder = num % 16;

	if (remainder < 10)
		_putchar(remainder + '0');
	else
		_putchar(remainder - 10 + 'a');

	num_digits++;

	return (num_digits);
}
