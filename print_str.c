#include "main.h"

/**
 * print_str - Prints a string to stdout
 * @s: The string to print
 *
 * Return: Number of characters printed
 */
int print_str(char *s)
{
	int count = 0;

	while (*s)
	{
		count += write(1, s++, 1);
	}

	return (count);
}
