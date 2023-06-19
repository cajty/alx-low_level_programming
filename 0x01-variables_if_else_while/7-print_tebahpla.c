#include <stdio.h>

/**
* main - prints all alphabats in revers using putchar
*
* return: 0 (end)
*/
int main(void)
{
	char q = 'z';
	while (q >= 'a')
	{
		putchar(q--);
	}
	putchar('\n');
	return(0);
}
