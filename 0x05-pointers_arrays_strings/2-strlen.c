#include "main.h"

/**
* _strlen -retuns the length of string.
*@s: char pointer
*
*Return:(c)
*/
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
		c++;
	return (c);
}
