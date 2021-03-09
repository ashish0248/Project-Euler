#include <stdio.h>

void	ft_prime_factor(long num)
{
	long count;
	long divisor;
	long num1;

	count = 3;
	divisor = 0;
	num1 = num;

	while(count < num1)
	{
		if (num1 % count == 0)
		{
			// 割れるときは割って数を小さくしていく
			num1 = num1 / count;
			// 割った時の大きい方の約数を保存
			divisor = num1;
			// 同じ数で割れる場合用
			count = count - 2;
		}
		// 偶数はあり得ないので飛ばす
		count+= 2;
	}

	if(divisor == 0)
	{
		printf("%ldは素数です", num);
	}else{
		printf("%ldの最大の約数は%ldです", num, divisor);
	}
	
}