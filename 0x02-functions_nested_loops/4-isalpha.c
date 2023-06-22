#include "main.h"

/**
* _print_sign - print + if n > 0, 0 if n = 0 , - if n < 0 
* @c: input for function
*
* Return: Always 0.
*/
int _print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
