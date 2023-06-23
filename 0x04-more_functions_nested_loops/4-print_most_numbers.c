#include "main.h"

/**
 * print_most_numbers - prints 0-9 using _putchar except 2 and 4
 *
 * Return: viod
 */
void print_most_numbers(void)
{
	int q;

	for (q = 0; q < 10; q++)
	{
		if (q != 2 && q != 4)
			_putchar(q + '0');
	}
	_putchar('\n');
}
