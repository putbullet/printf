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

/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 * @...: Variadic arguments to format.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0;

	va_start(ap, format);

	while (*format)
	{
		if (*format == '%')
			count += print_format(*++format, ap);
		else
			count += write(STDOUT_FILENO, format, 1);
		++format;
	}

	va_end(ap);
	return (count);
}

