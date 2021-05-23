// https://odz.sakura.ne.jp/projecteuler/?Problem+17
#include <stdio.h>
#include <time.h>

void ft_number_char(void);

int main(void)
{
	clock_t start,end;
	start = clock();

		ft_number_char();

	end = clock();
	printf("\n%.2f秒かかりました\n", (double)(end-start)/CLOCKS_PER_SEC);
	return (0);
}
