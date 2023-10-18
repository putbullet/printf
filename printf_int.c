#include "main.h"

/**
 * printf_int - Prints an integer.
 * @args: A va_list containing the integer to be printed.
 * Return: The number of characters printed.
 */
int printf_int(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	char buffer[12];

	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}

	if (n == 0)
	{
		count += write(1, "0", 1);
	}
	else
	{

		int i = 0;

		while (n > 0)
		{
			buffer[i] = n % 10 + '0';
			n /= 10;
			i++;
		}

		while (i > 0)
		{
			i--;
			count += write(1, &buffer[i], 1);
		}
	}

	return (count);
}

