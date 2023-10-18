#include "main.h"

/**
 * printf_format - Handles a specific format specifier.
 * @specifier: The format specifier to handle.
 *
 * Return: The number of characters printed.
 */
int (*printf_format(const char *specifier))(va_list)
{
	int pointx;
	type_t types[] = {
		{"s", printf_string},
		{"c", printf_char},
		{"d", printf_int},
		{"i", printf_int},
		{"b", printf_b},
		{NULL, NULL}
	};

	for (pointx = 0; types[pointx].identifier; pointx++)
	{
		if (*specifier == types[pointx].identifier[0])
			return (types[pointx].print);
	}

	return (NULL);
}

