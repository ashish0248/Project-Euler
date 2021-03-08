
#include <stdio.h>

void ft_sum_of_squares(void)
{
	int count;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;
	count = 1;

	while(count < 101)
	{
		sum1 = sum1 + count * count;
		count++;
	}

	count = 1;
	while(count < 101)
	{
		sum2 = sum2 + count;
		count++;
	}
	sum2 = sum2 * sum2;

	printf("二乗の和は%d,和の二乗は%d\nその差は%d\n", sum1, sum2, sum1-sum2);

}