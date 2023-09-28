#include "main.h"

/**
 * prime_0 - to check if n is prime.
 * @n: intger.
 * @i: intger.
 *
 * Return: 1 if n is prime, else 0.
 */

int prime_0(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime_0(n, i + 1));
}

/**
 * is_prime_number -  determine if n is prime.
 * @n: number.
 * Return: 1 if n prime, else 0.
 */

int	is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_0(n, 2));
}
