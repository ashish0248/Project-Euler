
#include <stdio.h>

void ft_long_strings(char *array)
{
	long product;
	long big_product;
	int count;
	char num1;
	long num2;

	count = 0;
	big_product = 0;
	while(count < 987)
	{
		product = 1;
		for (int i = 0; i < 13; ++i)
		{
		// 配列の中のchar型の数字をint型に直す
			num1 = array[count + i];
			num2 = num1 - '0';

			product = product * num2;
		}

		if (big_product < product)
		{
			big_product = product;
		}
		count++;
	}

printf("最も大きい積は%ldです\n", big_product);

}