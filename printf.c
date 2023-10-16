#include "main.h"

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

