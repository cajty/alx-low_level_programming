#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line..
 *
 * @str: string to reverse.
 */
void puts_half(char *str)
{
	int a;
	int n;

	n = 0;
	a = 0;
	while (str[a])
		a++;
	n = (a + 1) / 2;
	while (n > a)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar(str['\n']);
}
