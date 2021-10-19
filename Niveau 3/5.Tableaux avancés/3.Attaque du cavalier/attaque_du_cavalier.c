#include <stdio.h>

typedef int		t_bool;
#define TRUE	1
#define FALSE	0

char	scan_arr(char arr[8][8]);
t_bool	check_moves(int knight_x, int knight_y, char arr[8][8]);

int	main(void)
{
	char	arr[8][8];
	int	i;
	int	j;

	scan_arr(arr);
	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			if (arr[i][j] == 'C')
			{
				if (check_moves(i, j, arr) == FALSE)
					j++;
				if (check_moves(i, j, arr) == TRUE)
				{
					printf("yes\n");
					return (0);
				}
				else
				{
					printf("no\n");
					return (0);
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}

char  scan_arr(char arr[8][8])
{
	int      i;
	int      j;

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

t_bool   check_moves(int knight_x, int knight_y, char arr[8][8])
{
	int      x_move[8] = {2, 1, -1, -2, -2, -1, 1, 2};
	int      y_move[8] = {1, 2, 2, 1, -1, -2, -2, -1};
	int      i;
	int      j;

	j = 0;
	i = 0;
	while (i < 8 && j < 8)
	{
		if ((knight_x < 0) || (knight_x > 8)
				|| (knight_y < 0) || (knight_y > 8))
			return (' ');
		if (arr[knight_x + x_move[i]][knight_y + y_move[j]] >= 'a'
				&& arr[knight_x + x_move[i]][knight_y + y_move[j]] <= 'z')
			return (TRUE);
		j++;
		i++;
	}
	return (FALSE);
}
