#include "main.h"
int find_sqrt_recursion(int n, int s);


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 *
 * Return: the  square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt_recursion(n, 0));
}

/**
 * find_sqrt_recursion - find the natural square root of a number
 * @n: int
 * @s: int
 *
 * Return: the square root
 */
int find_sqrt_recursion(int n, int s)
{
	if (s * s > n)
		return (-1);
	if (s * s == n)
		return (s);
	return (find_sqrt_recursion(n, s + 1));
}
