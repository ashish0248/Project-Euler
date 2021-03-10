#include <stdio.h>

void ft_sum_prime_number(int count)
{
	long prime_num;
	long num;
	long sum;

	prime_num = 3;
	num = 2;
	sum = 2;

	while (prime_num < 2000000)
	{
		while(prime_num % num != 0)
		{
			num++;
		}
		if(prime_num == num)
		{
			sum = sum + prime_num;
			prime_num+= 2;
			num = 2;
		}else{
			prime_num+= 2;
			num = 2;
		}
	}

	printf("%ld\n", sum);
}