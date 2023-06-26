#include "main.h"

/**
* swap_int - swaps the values of a and b.
*@a: int pointer
*@b: int pointer
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
