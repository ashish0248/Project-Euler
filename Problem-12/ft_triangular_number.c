#include <stdio.h>


void ft_triangular_number(void)
{
    long next_num = 1;
    int num = 1;
    int count = 0;
    long divisor = 1;

    while(count < 500)
    {
        count = 0;
        divisor = 1;
        num++;
        next_num = next_num + num;
        while(divisor < next_num + 1)
        {
            if (next_num % divisor == 0)
            {
                count++;
            }
            divisor++;
        }
    }
    printf("500個より多く約数をもつ最初の三角数は%ldです", next_num);
}