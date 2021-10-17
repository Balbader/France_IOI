#include <stdio.h>

char	scan_arr(char arr[8][8]);
int		check_moves(int knight_x, int knight_y, char arr[8][8]);
void	check_count(int nbr);

int		main(void)
{
	char	arr[8][8];
	int		knight_x;
	int		knight_y;
	int		i;
	int		j;

	scan_arr(arr);

	// find knight positions
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
				check_count(check_moves(knight_x, knight_y, arr));
			}
			j++;
		}
		i++;
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

int		check_moves(int knight_x, int knight_y, char arr[8][8])
{

	int		x_move[8] = {2, 1, -1, -2, -2, -1, 1, 2};
	int		y_move[8] = {1, 2, 2, 1, -1, -2, -2, -1};
	int		i;
	int		j;
	int		count;

	count = 0;
	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			if (arr[knight_x + x_move[i]][knight_y + y_move[j]] >= 'a'
					&& arr[knight_x + x_move[i]][knight_y + y_move[j]] <= 'z')
				count += 1;
			j++;
		}
		i++;
	}
	return (count);
}

void	check_count(int nbr)
{
	if (nbr > 0)
	{
		printf("yes\n");
		printf("%d\n", nbr);
		nbr = 0;
	}
	if (nbr == 0)
	{
		printf("no\n");
		printf("%d\n", nbr);
	}
}
