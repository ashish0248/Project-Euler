// https://odz.sakura.ne.jp/projecteuler/?Problem+3

#include <stdio.h>
#include <unistd.h>

void	ft_prime_factor(long num);

int main(void)
{
	long num;
	num = 0;

	printf("調べたい自然数を入力してください\n");
	scanf("%ld", &num);

	ft_prime_factor(num);

	return (0);
}
