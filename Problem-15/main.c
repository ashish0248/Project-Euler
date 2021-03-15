// https://odz.sakura.ne.jp/projecteuler/?Problem+15
#include <stdio.h>
#include <time.h>

void ft_shortest_route(void);

int main(void)
{
	clock_t start,end;
	start = clock();

		ft_shortest_route();

	end = clock();
	printf("\n%.2f秒かかりました\n", (double)(end-start)/CLOCKS_PER_SEC);

	return (0);
}