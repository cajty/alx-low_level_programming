#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void.
 */
void	times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		_putchar('0');

		for (y = 1; y < 10; y++)
		{
			_putchar(',');
			_putchar(' ');

			z = x * y;

			if (z <= 9)
				_putchar(' ');
			else
				_putchar((z / 10) + '0');

			_putchar((z % 10) + '0');
		}

		_putchar('\n');
	}
}
