#include <stdio.h>

void ft_prime_number(int count)
{
	long prime_num;
	long num;
	int counted;

	prime_num = 3;
	num = 2;
	counted = 1;

	while (counted < count )
	{
		while( num < prime_num)
		{
			if(prime_num % num == 0)
			{
				prime_num += 2;
				num = 2;
			}else{
				num++;
			}
		}
		prime_num += 2;
		num = 2;
		counted++;
	}

	if(count ==1)
	{
		printf("%d番目の素数は2です\n", count);
	}else{
		printf("%d番目の素数は%ldです\n", count, prime_num-2);
	}

}