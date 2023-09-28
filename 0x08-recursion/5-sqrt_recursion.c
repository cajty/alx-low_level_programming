#include "main.h"

/**
*sqrt_0 - check the square root.
*@n: intger
*@i: intger
*Return: square root of n
*/
int sqrt_0(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (sqrt_0(n, i + 1));
}
/**
* _sqrt_recursion -returns the natural square root of a number
*
*@n: intger
*Return: square root of n.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_0(n, 0));
}
