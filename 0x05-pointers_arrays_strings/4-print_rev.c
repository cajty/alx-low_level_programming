#include "main.h"

/**
 * print_rev - function that prints a string, in revers followed by a new line.
 *
 * @s: string to reverse.
 */

void print_rev(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
		c++;
	while (c--)
		_putchar(s[c]);
	_putchar('\n');
}
