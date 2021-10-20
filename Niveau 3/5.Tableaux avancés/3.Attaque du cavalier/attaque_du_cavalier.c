#include <stdio.h>

typedef int		t_bool;
#define TRUE	1
#define FALSE	0

char	scan_arr(char arr[8][8]);
t_bool	check_moves(int knight_x, int knight_y, char arr[8][8]);

int	main(void)
{
	char	arr[8][8];
	int 	check;
	int		count;
	int		i;
	int		j;

	scan_arr(arr);
	count = 0;
	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			if (arr[i][j] == '.' || (arr[i][j] >= 'a' && arr[i][j] <= 'z'))
				count++;
			if (arr[i][j] == 'C')
			{
				check = check_moves(i, j, arr);
				if (check == FALSE)
				{
					count++;
					j++;
				}
				else
				{
					printf("yes\n");
					return (0);
				}
			}
			j++;
		}
		i++;
	}
	if (count == 64)
		printf("no\n");
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

t_bool   check_moves(int x, int y, char arr[8][8])
{
	int      x_move[8] = {2, 1, -1, -2, -2, -1, 1, 2};
	int      y_move[8] = {1, 2, 2, 1, -1, -2, -2, -1};
	int      i;
	int      j;

	j = 0;
	i = 0;
	while (i < 8 && j < 8)
	{
		if ((x < 0) || (x > 8) || (y < 0) || (y > 8))
			return (' ');

		if (arr[x + x_move[i]][y + y_move[j]] >= 'a'
				&& arr[x + x_move[i]][y + y_move[j]] <= 'z')
			return (TRUE);
		j++;
		i++;
	}
	return (FALSE);
}
