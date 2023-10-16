#include "main.h"

/**
 * print_char - Prints a character to stdout
 * @c: The character to print
 *
 * Return: Number of characters printed
 */
int print_char(int c)
{
    return (write(1, &c, 1));
}

