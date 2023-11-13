#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - custom printf function
 * @format: the format string
 * @...: the variable arguments to print
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}
	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'c')
				printed_chars += print_char(args);
			else if (*format == 's')
				printed_chars += print_str(args);
			else if (*format == '%')
				printed_chars += print_37();
			else if (*format == 'd' || *format == 'i')
				printed_chars += print_d(args);
			else
				printed_chars += (_putchar('%') + _putchar(*format));
		}
		else
		{
			printed_chars += _putchar(*format);
		}

		format++;
	}

	va_end(args);

	return (printed_chars);
}

