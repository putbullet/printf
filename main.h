#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>



/* Function prototypes */
int print_char(int c);
int print_str(char *str);
int print_format(char specifier, va_list ap);
int _printf(const char *format, ...);

#endif
