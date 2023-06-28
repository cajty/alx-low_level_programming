#include "main.h"

/**
 * puts2 - prints a string other character of a string.
 *
 * @str: string to reverse.
 */

void puts2(char *str)
{
	int c;

	while (str[c])
	{
	if (c % 2 == 0)
			_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
