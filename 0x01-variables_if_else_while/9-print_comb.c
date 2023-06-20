#include <stdio.h>

/**
 * main - prints numbers 0-9 using putchar.
 *
 * Return: 0 (success)
 */
int	main(void)
{
	int a = 0;

		while (a <= 9)
		{
			putchar(a + '0');
			if (a <= 8)
			{
				putchar(',');
				putchar(' ');
			}
			a++;
		}
	return (0);
}
