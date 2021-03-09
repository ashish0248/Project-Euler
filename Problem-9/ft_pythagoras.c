#include <stdio.h>

void ft_pythagoras(void)
{
	int a;
	int b;
	int c;
	int result;


	a = 1;
	b = 2;
	result = 9;

// a<b<cなのでa<500,b<499となる
	while(a < 500)
	{
		while(b < 499)
		{
			c = 1000 - (a + b);

			if( c*c == b*b + a*a)
			{
				printf("a=%d ,b=%d, C=%d\n", a , b, c);
				result = a * b * c;
			}
			b++;
		}
		a++;
		b = a + 1;
	}

	printf("a*b*c = %d\n", result);
}