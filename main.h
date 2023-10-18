#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>

/**
 * struct type - connect conversion specifiers with the correct print function
 * @print: a function pointer for the print functions
 * @identifier: the conversion specifier
 */
typedef struct type
{
    char *identifier;
    int (*print)(va_list);
} type_t;



/* Function prototypes */
int _putchar(char c);
int printf_b(va_list args);
int printf_char(va_list ap);
int printf_int(va_list ap);
int printf_string(va_list ap);
int (*printf_format(const char *specifier))(va_list);
int _printf(const char *format, ...);
int countBinary(unsigned int num);

#endif
