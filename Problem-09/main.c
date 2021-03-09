// https://odz.sakura.ne.jp/projecteuler/?Problem+9

#include <stdio.h>
#include <time.h>

void ft_pythagoras(void);

int main(void)
{

	clock_t start,end;
	start = clock();

		ft_pythagoras();

	end = clock();
	printf("%.2f秒かかりました\n", (double)(end-start)/CLOCKS_PER_SEC);

	return (0);
}