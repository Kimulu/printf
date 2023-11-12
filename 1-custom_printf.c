#include "main.h"
#include <unistd.h>

/**
 *_printf - produces output according to a format
 *@format: a character string
 *Return: number of characters printed
 */
int _printf(const char *format, ...)
{
va_list valist;
int count = 0;
va_start(valist, format);
while (*format)
{
if (*format == '%')
{
format++;
if (*format == 'd' || *format == 'i')
{
int value = va_arg(valist, int);
write(1, &value, 1);
count++;
}
}
else
{
write(1, format, 1);
count++;
}
format++;
}
va_end(valist);
return (count);
}
