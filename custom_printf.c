#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf function
 * @format: A format string that may contain format specifiers.
 * Return: (count) - The total number of characters printed.
 */
int _printf(const char *format, ...)
{
	int count;
	va_list args;
	char ch;

	va_start(args, format);
	count = 0;

	while (*format)
	{
		if (*format == '%' && *(++format))
		{
			if (*format == 'c' || *format == '%')
			{
				/* betty-style-disable */
				ch = (char)va_arg(args, int);
				write(1, &ch, 1);
				count++;
				/* betty-style-enable */
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);

				while (*str)
				{
					write(1, str++, 1);
					count++;
				}
			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}

		format++;
	}

	va_end(args);
	return (count);
}

