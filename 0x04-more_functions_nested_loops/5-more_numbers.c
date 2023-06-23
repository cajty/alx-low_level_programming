#include "main.h"

/**
 * more_numbers - print numbers from 0 - 14 ten times.
 *
 * Return: void.
 */

void more_numbers(void)
{
	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 15; y++)
		{
			_putchar(y + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
