#include <stdio.h>

/**
 * main - Entry paint
 *
 * prints all alphabets using putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
		putchar(a++);
	putchar('\n');
	return (0);
}
