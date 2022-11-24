#include <unistd.h>
#include "main.h"
#include <stdarg.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * print_char
 * Return: number of printed characters
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int print_char(va_list argp)
{
	char c = va_arg(argp, int);

	_putchar(c);
	return (1);
}
