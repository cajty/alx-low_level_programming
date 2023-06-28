#include "main.h"

/**
 * print_array - prints half of a string, followed by a new line..
 *
 * @n: int.
 * @a: int char.
 */
void print_array(int *a, int n)
{
	int l;
	int i;

	i = 0;
	l = n;
	while (i < l)
	{
		printf("%i", a[i]);
		if (i != n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
