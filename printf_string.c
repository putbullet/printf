#include "main.h"

/**
 * printf_string - Prints a string to stdout
 * @ap: A va_list containing the string to be printed.
 * Return: Number of characters printed
 */
int printf_string(va_list ap)
{
	char *s = va_arg(ap, char *);
	int count = 0;

	if (s == NULL)

		s = "(null)";

	while (*s)
	{
		count += write(1, s, 1);
		s++;
	}

	return (count);
}
