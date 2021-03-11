// https://odz.sakura.ne.jp/projecteuler/?Problem+11

#include <stdio.h>
#include <time.h>

void ft_grid_number(void);

int main(void)
{
	clock_t start,end;
	start = clock();

		ft_grid_number();

	end = clock();
	printf("%.2f秒かかりました\n", (double)(end-start)/CLOCKS_PER_SEC);

	return (0);
}