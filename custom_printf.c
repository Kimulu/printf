#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf function that supports character ('c') and
 *           string ('s') format specifiers.
 * @format: A format string that may contain format specifiers.
 *
 * Return:
 * (count) - The total number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	int count = 0;

	while (*format != '\0')
	{
		if (*format == 'c')
		{
			/*Character argument*/
			char c = va_arg(args, int);

			write(1, &c, 1);
			count++;
		}
		else if (*format == 's')
		{
			/*String argument*/
			const char *s = va_arg(args, const char *);
			size_t len = 0;

			while (s[len] != '\0')
			{
				len++;
			}
			write(1, s, len);
			count += len;
		}
		else
		{
			/*Non-placeholder character, print as is*/
			write(1, format, 1);
			count++;
		}

		format++;
	}

	va_end(args);
	return (count);
}

