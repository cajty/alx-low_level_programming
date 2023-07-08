#include "main.h"
/**
* main - multiplies two numbers
*@argc: argument count
*@argv: argument vector
*Return: 0 if success or 1 failure
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	int res:
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argc == 3)
	{
		res = a + b;
		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}