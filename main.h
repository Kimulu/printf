#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdarg.h>
int print_char(va_list val);
int print_str(va_list val);
int _printf(const char *format, ...);
int _putchar(char c);
int print_strlen(const char *str);
int print_37(void);
int print_number(int n);
int print_d(va_list args);
int print_i(va_list args);
int print_binary(va_list val);
int print_b_recursive(unsigned int num);
int print_unsigned(va_list args);
unsigned int power(unsigned int base, unsigned int exponent);
int print_octal(va_list val);
int print_octal_recursive(unsigned int num);
int print_hex_recursive_upper(unsigned int num);
int print_hex_upper(va_list val);
int print_hex_recursive(unsigned int num);
int print_hex(va_list val);
#endif
