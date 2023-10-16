#include "main.h"

/**
 * print_format - Handles a specific format specifier.
 * @specifier: The format specifier to handle.
 * @ap: The va_list with variadic arguments.
 *
 * Return: The number of characters printed.
 */
int print_format(char specifier, va_list ap)
{
        int count = 0;

        if (specifier == 'c')
                count = print_char(va_arg(ap, int));
        else if (specifier == 's')
                count = print_str(va_arg(ap, char *));
        else
                count += write(1, &specifier, 1);

        return (count);
}
