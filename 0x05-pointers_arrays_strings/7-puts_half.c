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
	int i;

	a = 0;
	while (str[a])
		a++;
	n = (a + 1) / 2;
	i = n;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
