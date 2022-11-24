#include <unistd.h>
#include "main.h"

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
