#include "main.h"

/**
* _islower - Returns 1 if c is lowercase Returns 0 otherwise.
* @c: input for function
*
* Return: Always 0.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
