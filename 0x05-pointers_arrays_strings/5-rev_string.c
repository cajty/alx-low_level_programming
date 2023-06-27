#include "main.h"

/**
 * rev_string - revers a string.
 *
 * @s: string to reverse.
 */

void rev_string(char *s)
{
	int c;
	int a;
	char b;

	c = 0;
	a = 0;
	while (s[a] != '\0')
		a++;
	while (a > c)
	{
		b = s[--a];
		s[a] = s[c];
		s[c++] = b;
	}
}
