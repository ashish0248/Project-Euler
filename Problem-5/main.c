// https://odz.sakura.ne.jp/projecteuler/?Problem+5

#include <stdio.h>
#include <time.h> 

void ft_least_common_multiple(void);

int main(void)
{

	clock_t start,end;
	start = clock();

		ft_least_common_multiple();

	end = clock();
  	printf("%.2f秒かかりました\n",(double)(end-start)/CLOCKS_PER_SEC);

	return (0);
}