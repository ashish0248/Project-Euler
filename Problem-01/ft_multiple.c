#include <stdio.h>

void	ft_multiple(void)
{
	int sum;
	int num;

	sum = 0;
	num = 1;

	while(num < 1000)
	{
		if(num % 3 == 0)
		{
			sum += num;
		}

		if(num % 5 == 0)
		{
			sum += num;
		}

		if(num % 15 == 0)
		{
			sum = sum - num;
		}
		num++;
	}

	printf("%d", sum);

}