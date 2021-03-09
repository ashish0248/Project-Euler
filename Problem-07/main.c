// https://odz.sakura.ne.jp/projecteuler/?Problem+7

#include <stdio.h>
#include <time.h>

void ft_prime_number(int count);

int main(void)
{
	int count;

	printf("何番目の素数を調べますか？\n");
	scanf("%d", &count);

	clock_t start,end;
	start = clock();

		ft_prime_number(count);

	end = clock();
	printf("%.2f秒かかりました\n", (double)(end-start)/CLOCKS_PER_SEC);

	return (0);
}