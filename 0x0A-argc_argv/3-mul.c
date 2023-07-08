#include "main.h"
/**
* main - multiplies two numbers
*@argc: argument count
*@argv: argument vector
*Return: 0 if success or 1 Error
*/
int main(int argc, char *argv[])
{
	int res;
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
		res = a * b;
		printf("%d\n", res);
		return (0);
}
