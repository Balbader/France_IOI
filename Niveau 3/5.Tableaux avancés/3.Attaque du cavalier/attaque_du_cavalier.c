#include <stdio.h>

typedef int bool;
#define true 1
#define false 0

char	scan_arr(char arr[8][8]);
bool	check_moves(int knight_x, int knight_y, char arr[8][8]);

int		main(void)
{
	char	arr[8][8];
	int		knight_x;
	int		knight_y;
	int		i;
	int		j;

	scan_arr(arr);

	// find knight positions
	knight_x = 0;
	knight_y = 0;
	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			if (arr[i][j] == 'C')
			{
				knight_x = i;
				knight_y = j;
				if (check_moves(knight_x, knight_y, arr) == true)
				{
					printf("yes\n");
					return (0);
				}
			}
			j++;
		}
		i++;
	}
	if (check_moves(knight_x, knight_y, arr) == false)
	{
		printf("no\n");
		return (0);
	}
	return (0);
}

char	scan_arr(char arr[8][8])
{
	int		i;
	int		j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			scanf("%c", &arr[i][j]);
			j++;
		}
		scanf("\n");
		i++;
	}
	return (**arr);
}

bool	check_moves(int knight_x, int knight_y, char arr[8][8])
{

	int		x_move[8] = {2, 1, -1, -2, -2, -1, 1, 2};
	int		y_move[8] = {1, 2, 2, 1, -1, -2, -2, -1};
	int		i;
	int		j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			if (knight_x < 0 || knight_x > 8 || knight_y < 0 || knight_y > 8)
				return ' ';
			if (arr[knight_x + x_move[i]][knight_y + y_move[j]] >= 'a'
					&& arr[knight_x + x_move[i]][knight_y + y_move[j]] <= 'z')
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}
