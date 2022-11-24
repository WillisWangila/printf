#include <unistd.h>
#include "main.h"
#include <stdarg.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
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

int print_str(va_list argp)
{
	char *s = va_arg(argp, char *);
	int a = 0, count = 0;
	while (s[a] != '\0')
	{
		_putchar(s[a]);
		count++;
		a++;
	}
	return (count);
}
