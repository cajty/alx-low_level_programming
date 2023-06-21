#include <stdio.h>

int	main(void)
{
	int	i, sum;

	for (i = 1; i < 6; i++)
	{
		for (sum = 1; sum < i; sum++)
		{
			sum += sum;
		}
		i += 1;
	}
	printf("sum is %d", i);

	return (0);
}
