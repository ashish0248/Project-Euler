#include <stdio.h>

void ft_sum_large_numbers(void)
{
    char fake[51];
    int array[51];
    int array2[51];
    int count = 0;
    int i = 0;
    int num;

    while(count < 100)
    {
        i = 0;
         while(i < 50)
        {
            if(count == 0)
            {
                scanf("%c", &fake[i]);
                array[i] = fake[i] - '0';
            }else{
            
            // 各桁ごとに足しておく
            // 文字で数字を１文字ずつ受け取ってint型にして配列に入れる
            if(i == 0)
            {
                scanf("%c", &fake[i]);
            }
                scanf("%c", &fake[i]);
                array2[i] = fake[i] - '0';
                array[i] = array[i] + array2[i];
            }
            i++;
        }
        count++;
    }


    i = 49;
    while(i > 0)
    {
        // 一つ上の位に繰り上げ
        num = array[i] / 10 ;
        array[i] = array[i] - num * 10;
        array[i - 1] = array[i -1] + num;
        i--;
    }

    num = array[0];
    while(num / 10 != 0)
    {
        // array[0]の桁数を数える
        num = num / 10;
        i++;
    }

    count = 1;
    printf("答えは%d", array[0]);
    while(count < 10 - i)
    {
        printf("%d", array[count]);
        count++;
    }

}