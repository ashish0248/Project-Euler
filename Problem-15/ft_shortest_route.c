#include <stdio.h>

void ft_shortest_route(void)
{
    long grid[21][21];
    int x = 1;
    int y = 1;
    int count = 0;

    while(y < 21)
    {
        grid[y][0] = 1;
        y++;
    }
    
    while(x < 21)
    {
        grid[0][x] = 1;
        x++;
    }

    x = 1;
    y = 1;
    while(y < 21)
    {
        while(x < 21)
        {
            grid[y][x] = grid[y - 1][x] + grid[y][x -1];
            x++;
        }
        y++;
        x = 1;
    }

    printf("%ld通りです", grid[20][20]);
}