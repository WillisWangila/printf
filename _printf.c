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
	int a = 0, count = 0;
	char *s;
	va_list argp;

	va_start(argp, format);

	for (p = format; *p != '\0'; p++)
	{
		if (*p != '%')
		{
			_putchar(*p);
			count++;
			continue;
		}
		switch (*++p)
		{
		case 'c':
			print_char(argp);
			break;
		case 's':
			s = va_arg(argp, char *);
			while (s[a] != '\0')
			{
				_putchar(s[a]);
				count++;
				a++;
			}
			break;
		case '%':
			_putchar('%');
			count++;
			break;
		default:
			_putchar(*--p);
			count++;
			continue;
		}
	}
	return (count);
}
