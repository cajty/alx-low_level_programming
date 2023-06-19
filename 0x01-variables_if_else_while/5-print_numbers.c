#include <stdio.h>

/**
 * main - prints 0-9 using putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a = 0;
	char c = a + '0';

	while (a <= 9)
	{
		putchar(c);
		c++;
		a++;
	}
	putchar('\n');
	return (0);

}
