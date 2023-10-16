#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>



/* Function prototypes */
int printf_char(int c);
int printf_string(char *str);
int printf_format(char specifier, va_list ap);
int printf_int(int n);
int _printf(const char *format, ...);

#endif
