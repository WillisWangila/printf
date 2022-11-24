#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints text to stdout and handles format specifiers
 * @format: contains string to be printed sans specifiers
 * Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	const char *p;
	int i, a = 0;
	char *s;
	va_list argp;

	va_start(argp, format);

	for (p = format; *p != '\0'; p++)
	{
		if (*p != '%')
		{
			_putchar(*p);
			continue;
		}
		switch (*++p)
		{
		case 'c':
			i = va_arg(argp, int);
			_putchar(i);
			break;
		case 's':
			s = va_arg(argp, char *);
			while (s[a] != '\0')
			{
				_putchar(s[a]);
				a++;
			}
			break;
		case '%':
			_putchar('%');
			break;
		default:
			_putchar(*--p);
			continue;
		}
	}
	va_end(argp);
	return (0);
}
