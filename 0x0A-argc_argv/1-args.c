#include "main.h"
/**
* main - prints the number of the arguments
*@argc: argument count
*@argv: argument vector
*Return: 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	int a = 0;

	if (argc--)
		a++;
	printf("%d\n", a);
	return (0);
}
