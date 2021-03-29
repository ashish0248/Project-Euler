#include <stdio.h>

void ft_index(void)
{
    int array[1000] = {};
    int up_num;
    int digit = 1;
    int count = 1;
    int i;
    int result = 0;

    array[0] = 2;
    while(count < 1000)
    {
        i = 0;

        while(i < digit)
        {
            // 全ての位に2をかける
            array[i] = array[i] * 2;
            i++;
        }
        i = 0;

        while(i < digit)
        {
            if (array[i] / 10 != 0 )
            {
                // 繰り上がる場合
                up_num = array[i] / 10;
                array[i] = array[i] % 10;
                array[i+1] = array[i+1] + up_num;
                if(digit < i + 2){
                    // 桁数が増える場合
                    digit = i + 2;
                }
            }
            i++;
        }
        count++;
    }

    i = 0;
    while(i < digit)
    {
        result = result + array[i];
        i++;
    }

    printf("%d", result);
}