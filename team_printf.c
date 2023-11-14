#include "main.h"

/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
va_list args;
int printed_chars = 0;
const char *new = format;
va_start(args, format);
while (*format)
{
if (*format == '%')
{
new++;
if (*format == 'c')
printed_chars += print_char(args);
else if (*format == 's')
printed_chars += print_str(args);
else if (*format == '%')
printed_chars += print_37();
else if (*format == 'd' || *format == 'i')
printed_chars += print_d(args);
else if (*format == 'b')
printed_chars += print_binary(args);
else if (*format == 'u')
printed_chars += print_unsigned(args);
else if (*format == 'o')
printed_chars += print_octal(args);
else if (*format == 'x')
printed_chars += print_hex(args);
else if (*format ==  'X')
printed_chars += print_hex_upper(args);
else
printed_chars += (_putchar('%') + _putchar(*format));
}
else
{
printed_chars += _putchar(*format);
}
new++;
}
va_end(args);
return (printed_chars);
}
