#include "main.h"

/**
 * printf_format - Handles a specific format specifier.
 * @specifier: The format specifier to handle.
 * @ap: The va_list with variadic arguments.
 *
 * Return: The number of characters printed.
 */
int printf_format(char specifier, va_list ap)
{
	int count = 0;

	if (specifier == 'c')
		count = printf_char(va_arg(ap, int));
	else if (specifier == 's')
		count = printf_string(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count = printf_int(va_arg(ap, int));
	else
		count += write(1, &specifier, 1);

	return (count);
}

