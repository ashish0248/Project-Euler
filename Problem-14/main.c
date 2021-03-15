// https://odz.sakura.ne.jp/projecteuler/?Problem+14
#include <stdio.h>
#include <time.h>

void ft_collatzs(void);

int main(void)
{
	clock_t start,end;
	start = clock();

		ft_collatzs();

	end = clock();
	printf("\n%.2f秒かかりました\n", (double)(end-start)/CLOCKS_PER_SEC);

	return (0);
}