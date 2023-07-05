#include "main.h"
/**
*_print_rev_recursion - prints a string in reverse0.
*@s : string
*
*return : void
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
