// https://odz.sakura.ne.jp/projecteuler/?Problem+12
#include <stdio.h>
#include <time.h>

void ft_triangular_number(void);

int main(void)
{
	clock_t start,end;
	start = clock();

		ft_triangular_number();

	end = clock();
	printf("%.2f秒かかりました\n", (double)(end-start)/CLOCKS_PER_SEC);

	return (0);
}