#include "main.h"

/**
 * print_numbers - prints 0-9 using _putchar
 *
 */
void print_numbers(void)
{
	int q;

	for (q = 0; q < 10; q++)
	{
		_putchar(q + '0');
		_putchar('\n');
	}
}
