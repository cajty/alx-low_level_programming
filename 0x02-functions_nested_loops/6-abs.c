#include "main.h"

/**
 * _abs - print the absolute value of an integer
 *
 * @n: integer type
 *
 * Return: 0 (Success)
 */

int	_abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
