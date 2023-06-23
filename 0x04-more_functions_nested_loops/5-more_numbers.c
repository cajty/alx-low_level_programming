#include "main.h"

/**
 * more_numbers - print numbers from 0 - 14 ten times.
 *
 * Return: void.
 */

void	more_numbers(void)
{
	int	x, y;

	x = 0;
	y = 0;
	while (x <= 9)
	{
		while (y <= 14)
		{
			_putchar(y + '0');
			y++;
		}
		_putchar('\n');
		x++;
	}
	_putchar('\n');
}
