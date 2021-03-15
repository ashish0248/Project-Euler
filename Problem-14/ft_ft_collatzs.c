#include <stdio.h>

void ft_collatzs(void)
{
    long num = 2;
    int original_num = 0;
    int count = 0;
    int result_num;
    int result_count;

    while(original_num < 1000000)
    {
        if(count == 0)
        {
        // 元の数を保存
            original_num = num;
        }
        // 偶数の時
        if(num % 2 == 0)
        {
            num = num / 2;
        }else{
        // 奇数の時
            num = 3 * num + 1;
        }
        count++;

        if(num == 1)
        {
            if(count > result_count)
            {
                result_num = original_num;
                result_count = count;
            }
            count = 0;
            num = original_num + 1;
        }
    }

    printf("%dで%d個の数列", result_num, result_count + 1);
}