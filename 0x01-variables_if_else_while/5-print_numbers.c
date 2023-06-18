#include <stdio.h>

/**
 * main - Emtry point
 *
 * prints 0-9
 *
 * return: 0 end
 */
int main(void)
{
	int a = 0;

	while (a <= 9)

	{
		putchar(a + "0");
		a++;
	}
	putchar('\n');
	return (0);

}
