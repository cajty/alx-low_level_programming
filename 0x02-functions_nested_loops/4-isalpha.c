#include "main.h"

/**
* _isalpha - Returns 1 if c is alphabetic Returns 0 otherwise.
* @c: input for function
*
* Return: Always 0.
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
