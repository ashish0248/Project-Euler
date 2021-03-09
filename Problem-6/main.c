// https://odz.sakura.ne.jp/projecteuler/?Problem+6

#include <stdio.h>
#include <time.h>

void ft_sum_of_squares(void);

int main(void)
{
	clock_t start,end;
	start = clock();

		ft_sum_of_squares();

	end = clock();
	printf("%.2f秒かかりました\n", (double)(end-start)/CLOCKS_PER_SEC);

	return (0);
}