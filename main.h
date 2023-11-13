#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int print_char(va_list val);
int print_str(va_list val);
int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int print_d(va_list args);
int print_i(va_list args);
#endif
