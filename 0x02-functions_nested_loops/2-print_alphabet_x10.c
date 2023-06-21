#include"main.h"

/**
* print_alphabet_x10 -fun that prints the alphabet x10
*
* return : void
*/
void print_alphabet_x10(void)
{
	int a = 1;

	while (a <= 10)
	{
		int q = 'a';

		while (q <= 'z')
		{
			_putchar(q);
			q++;
		}
		_putchar('\n');
		a++;
	}
}
