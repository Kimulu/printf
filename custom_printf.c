#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
    va_list args;
    int printed_chars = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;

            switch (*format)
            {
            case 'c':
                printed_chars += print_char(args);
                break;
            case 's':
                printed_chars += print_str(args);
                break;
            case '%':
                printed_chars += print_37();
                break;
            case 'd':
            case 'i':
                printed_chars += print_d(args);
                break;
	    case 'b':
		printed_chars += print_b(args);
		break;
            default:
                _putchar('%');
                _putchar(*format);
                printed_chars += 2;
                break;
            }
        }
        else
        {
            _putchar(*format);
            printed_chars++;
        }

        format++;
    }

    va_end(args);

    return printed_chars;
}
