#include"main.h"

/**
* print_alphabet -fun that prints the alphabet
*
* return : void
*/

void print_alphabet(void)
{
	int q = 'a';

	while (q <= 'z')
	{
		_putchar(q);
		q++;
	}
	_putchar('\n');
}
