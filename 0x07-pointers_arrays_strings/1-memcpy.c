#include "main.h"
/**
* _memcpy - copies memory area.
*@dest: memory area.
*@src: memory area.
*@n: bytes
*
*Return: dest the address
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;

	while (n > 0)
	{
		dest[a] = src[a];
		n--;
		a++;
	}
	return (dest);
}
