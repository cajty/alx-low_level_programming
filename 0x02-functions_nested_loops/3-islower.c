#include "main.h"

/**
* int_islower - checks for lowercase charater
*
* Return: Always 0.
*/int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
