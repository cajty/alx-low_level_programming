#include "main.h"
int find_prime(int n, int p);


/**
 * is_prime_number - check if is a prime
 * @n: int
 *
 * Return: 1 if n prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (find_prime(n, n - 1));
}

/**
 * find_prime - find the if is aprime
 * @n: int
 * @p: int
 *
 * Return: the result 0 or 1
 */
int find_prime(int n, int p)
{
	if (p == 1)
		return (1);
	if (n % p  == 0 && p > 0)
		return (0);
	return (find_prime(n, p - 1));
}
