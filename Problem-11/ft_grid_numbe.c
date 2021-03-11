
#include <stdio.h>


void ft_grid_number(void)
{
	int grid[21][21];
	int x = 0;
	int y = 0;
	int count = 0;
	int product = 1;
	int result;

	// 読み込み
	while(y < 20)
	{
		while(x < 20)
		{
			scanf("%d", &grid[y][x]);
			x++;
		}
		y++;
		x = 0;
	}

	// Y軸方向の積
	while(x < 20)
	{
		while(y < 17)
		{
			while (count < 4)
			{
				product = product * grid[y + count][x];
				count++;
			}
			if(product > result)
			{ 
				result = product;
			}
			y++;
			product = 1;
			count = 0;
		}
		x++;
		y = 0;
	}

	//  左斜め方向の積
	while(x < 17)
	{
		while(y < 17)
		{
			while (count < 4)
			{
				product = product * grid[y + count][x + count];
				count++;
			}
			if(product > result)
			{ 
				result = product;
			}
			y++;
			product = 1;
			count = 0;
		}
		x++;
		y = 0;
	}

	//  右斜め方向の積
	x = 3;
	while(x < 20)
	{
		while(y < 17)
		{
			while (count < 4)
			{
				product = product * grid[y + count][x - count];
				count++;
			}
			if(product > result)
			{ 
				result = product;
			}
			y++;
			product = 1;
			count = 0;
		}
		x++;
		y = 0;
	}

	printf("結果は%dです", result);
}

