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
int print_binary(unsigned int num);
int print_b(va_list val);
int print_unsigned(va_list val);
int print_octal(va_list val);
int print_hex(va_list val);
int print_hex_upper(va_list val);
int print_octal_recursive(unsigned int num);
int print_hex_recursive(unsigned int num);
int print_hex_recursive_upper(unsigned int num);
#endif
