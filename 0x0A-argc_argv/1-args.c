#include "main.h"
/**
* main - prints the number of the arguments
*@argc: argument count
*@argv: argument vector
*Return: 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
