#include "main.h"
/**
* _strspn - gets the length of aprefix substring.
* @s:input string.
* @accept: string.
*
* Return: c.
*/
unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (s[a] != '\0')
	{
	while ( accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
			b++;
		}
		a++;
	}
	return (c);
}
