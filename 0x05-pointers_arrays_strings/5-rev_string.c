#include "main.h"

/**
 * rev_string - revers a string.
 *
 * @s: string to reverse.
 */

void rev_string(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
		c++;
	while (c--)
		s[c];
}
