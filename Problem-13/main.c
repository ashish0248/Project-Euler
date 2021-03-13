// https://odz.sakura.ne.jp/projecteuler/?Problem+13
#include <stdio.h>
#include <time.h>

void ft_sum_large_numbers(void);

int main(void)
{
	clock_t start,end;
	start = clock();

		ft_sum_large_numbers();

	end = clock();
	printf("\n%.2f秒かかりました\n", (double)(end-start)/CLOCKS_PER_SEC);

	return (0);
}