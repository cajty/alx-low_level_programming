#include "main.h"
/**
* main - prints all arguments it receives
*@argc: argument count
*@argv: argument vector
*Return: 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
