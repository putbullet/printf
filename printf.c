#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 * @...: Variadic arguments to format.
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0;
	int (*function)(va_list) = NULL;

	va_start(ap, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '%')
		{
			format++;
			function = printf_format(format);
			if (*format == '\0')
				return (-1);
			else if (function == NULL)
			{
				_putchar(*(format - 1));
				_putchar(*format);
				count += 2;
			}
			else
				count += function(ap);
		}
		else if (*format == '%' && *(format + 1) == '%')
		{
			format++;
			_putchar('%');
			count++;
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}

	va_end(ap);
	return (count);
}

