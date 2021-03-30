#include <stdio.h>

// 受け取った数字の文字数を返す関数
int ft_len(int num)
{
    int result = 0;

    switch (num)
    {
    case 1:
    case 2:
    case 6:
    case 10:
        //3文字の数字 
        result = 3;
        break;
    case 4:
    case 5:
    case 9:
        //4文字の数字 
        result = 4;
        break;
    case 3:
    case 7:
    case 8:
    case 40:
    case 50:
    case 60:
        //5文字の数字 
        result = 5;
        break;
    case 11:
    case 12:
    case 20:
    case 30:
    case 80:
    case 90:
        //6文字の数字 
        result = 6;
        break;

    case 15:
    case 16:
    case 70:
        //7文字の数字 
        result = 7;
        break;
    case 13:
    case 14:
    case 18:
    case 19:
        //8文字の数字 
        result = 8;
        break;

    case 17:
        //9文字の数字 
        result = 9;
        break;
    default:
        break;
    }
    return result;
}

void ft_number_char(void)
{
    int num = 1;
    int num_2;
    int len;
    int result = 0;

    while(num < 1000)
    {
        if(num / 100 != 0)
        {
            // 100の位がある時(hundred and)
            len = ft_len(num / 100);
            result= result + 10 + len;

            num_2 = num % 100;
            if(num_2 == 0){
                // andをつけない場合
                result = result - 3;
            }
        }else{
            num_2 = num;
        }

        if(num_2 / 10 == 1)
        {
            // １０の位が1の時
            len = ft_len(num_2);
            result= result + len;      
        }else{
            // 1の位
            len = ft_len(num_2 % 10);
            result= result+ len;  
        
            // 10の位
            num_2 = num_2 - num_2 % 10;
            len = ft_len(num_2);
            result= result+ len;
        }
        num++;
    }
    // 1000の時に11文字
    if(num == 1000){
        result = result + 11;
    }
    printf("%d\n", num);
    printf("%d", result);
}