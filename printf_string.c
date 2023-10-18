#include "main.h"

/**
 * printf_string - Prints a string to stdout
 * @args: A va_list containing the string to be printed.
 * Return: Number of characters printed
 */
int printf_string(va_list args)
{
	char *s = va_arg(args, char *);
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
