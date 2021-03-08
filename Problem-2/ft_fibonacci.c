#include <stdio.h>
#include <unistd.h>

void	ft_fibonacci(void)
{
	int num1;
	int num2;
	int num3;
	int even;

	num1 = 1;
	num2 = 2;
	even = 2;

	while(num1 + num2 <= 4000000)
	{
		num3 = num1 + num2;
		if(num3 % 2 == 0)
		{
			even += num3;
		}
		num1 = num2;
		num2 = num3;
	}
	printf("%d\n", even);

}