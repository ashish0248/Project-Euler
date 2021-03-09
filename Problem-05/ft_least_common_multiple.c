#include <stdio.h>

void ft_least_common_multiple(void)
{
	long num;
	int count;

// 素数を全てかけた数以上なのは確定
	num = 9699690;
	count = 1;

	while (count < 21)
	{
		if (num % count == 0)
		{
			count++;
		}else{
			num ++;
			count = 1;
		}
	}
	printf("最小公倍数は%ldです\n", num);
}