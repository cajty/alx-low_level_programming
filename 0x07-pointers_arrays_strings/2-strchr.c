#include "main.h"
/**
* _strchr - copies memory area.
*@s: string.
*@c: character.
*
*Return: 0.
*/
char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] == c)
			return (&s[a]);
		a++;
	}
	return (0);
}
