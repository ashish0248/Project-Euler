#include <stdio.h>
#include <unistd.h>


// 配列を使ってtimesの桁を逆に並び替える関数
int	ft_rev_times(int times)
{
	int array[6];
	int rev_times;
	int digit;
	int count;

	count = 0;
	rev_times = 0;
	digit = 100000;


	while(count < 6)
	{
		// 一桁ずつ配列に入れる
		array[count] = times / digit;
		times = times % digit;
		digit = digit / 10;
		count++;
	}

	// 配列を逆から取り出す
	digit = 100000;
	while(count > 0)
	{
		rev_times =  rev_times + array[count - 1] * digit;
		digit = digit / 10;
		count--;
	}

	// 五桁の時先頭が0となってしまうので戻す
	if(array[0] == 0)
	{
		rev_times = rev_times / 10;
	}

	return rev_times;
}



void	ft_palindrome(void)
{
	int num1;
	int num2;
	int times;
	int rev_times;
	int max_times;

	num1 = 100;
	num2 = 100;

	while(num1 < 1000)
	{
		while(num2 < 1000)
		{
			times = num1 * num2;

			rev_times = ft_rev_times(times);

			if(times - rev_times == 0)
			{
				if ( max_times < rev_times)
				{
					max_times = rev_times;
				}
				// printf("%dと%dの積は%dで回文数です\n", num1, num2, rev_times);
			}
			num2++;

		}
		num2 = 100;
		num1++;
	}

	printf("三桁同士の積の最大の回文数は%dです\n", max_times);
}

