#include <stdio.h>

/**
 * main - prints 0-9 using putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	int c = 0;
	char a = 'a';

	while (c <= 9)
	{
		putchar(c + '0');
		c++;
	}
	while (a <= 'f')
	{
		putchar(a++);
	}
	putchar('\n');
	return (0);
}
