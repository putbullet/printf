#include "main.h"

/**
 * printf_char - Prints a character to stdout
 * @args: A va_list containing the character to be printed.
 * Return: Number of characters printed
 */
int printf_char(va_list args)
{
	int c = va_arg(args, int);

	return (write(1, &c, 1));

}

