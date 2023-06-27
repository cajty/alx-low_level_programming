#include "main.h"

/**
* print_rev -that prints a string in reverse, followed by a new line.
*@str: char pointer
*
*/
void print_rev(char *str)
{
	int len;
	len = _strlen(str);
	while (len != 0)
	{
		printf("%c\n", str[len]);
		len--;
	}

}
