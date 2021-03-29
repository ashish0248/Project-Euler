// https://odz.sakura.ne.jp/projecteuler/?Problem+16
#include <stdio.h>
#include <time.h>

void ft_index(void);

int main(void)
{
	clock_t start,end;
	start = clock();

		ft_index();

	end = clock();
	printf("\n%.2f秒かかりました\n", (double)(end-start)/CLOCKS_PER_SEC);
	return (0);
}
