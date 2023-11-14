#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
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
#endif
