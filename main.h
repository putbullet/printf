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
int printf_char(va_list args);
int printf_int(va_list args);
int printf_string(va_list args);
int (*printf_format(const char *specifier))(va_list);
int _printf(const char *format, ...);
int countBinary(unsigned int num);
int printf_u(va_list args);
int printf_o(va_list args);
int printf_x(va_list args);
int printf_X(va_list args);
void printf_lowerHex(unsigned int num, int *count);
void printf_upperHex(unsigned int num, int *count);
int printf_p(va_list args);
void printf_pointer(unsigned long ptr, int *count);
int printf_r(va_list args);
int  print_number(unsigned int n);
int countDigits(unsigned int num);
int countOctal(unsigned int num);
int countBinary(unsigned int num);
int _strlen(char *str);
#endif
