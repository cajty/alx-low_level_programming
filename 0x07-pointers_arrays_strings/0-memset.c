#include "main.h"
/**
* _memset - fill a block of memory with a value.
*@s: address
*@b: value
*@n: bytes
*
*Return: s the address
*/
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	while (n > 0)
	{
		s[a] = b;
		n--;
		a++;
	}
	return (s);
}
