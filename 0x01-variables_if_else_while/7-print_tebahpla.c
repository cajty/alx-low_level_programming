#include <stdio.h>

/**
* main - enter point
*
* prints all alphabats in revers using putchar
*
* return: 0 (success)
*/
int main(void)
{
	char q = 'z';

	while (q >= 'a')
	{
		putchar(q--);
	}
	putchar('\n');
	return (0);
}
