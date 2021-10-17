#include <stdio.h>

char	scan_arr(char arr[8][8]);

/*void	print_arr(int arr[8]);*/

int		main(void)
{
	char	arr[8][8];
	int		knight_pos[8][8];
	int		knight_x[8];
	int		knight_y[8];
	int		x_move[8] = {2, 1, -1, -2, -2, -1, 1, 2};
	int		y_move[8] = {1, 2, 2, 1, -1, -2, -2, -1};
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
				knight_pos[i][j] = arr[i][j];
				knight_x[i] = i;
				knight_y[j] = j;
				printf("knight_pos[%d][%d]\n", knight_x[i], knight_y[j]);
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

/*void	print_arr(int arr[8])*/
/*{*/
	/*int		i;*/

	/*i = 0;*/
	/*while (i < 8)*/
	/*{*/
		/*printf("%d ", arr[i]);*/
		/*i++;*/
	/*}*/
/*}*/
