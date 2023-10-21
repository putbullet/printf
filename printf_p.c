#include "main.h"

/**
 * printf_p - prints a pointer number.
 * @args: arguments.
 * Return: counter.
 * printf_X - prints a hexadecima num.
 */
int printf_p(va_list args)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(args, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = printf_X(a);
	return (b + 2);
}
