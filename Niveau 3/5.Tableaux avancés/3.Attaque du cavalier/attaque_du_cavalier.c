#include <stdio.h>

typedef int		t_bool;
#define TRUE	1
#define FALSE	0

char	scan_arr(char arr[8][8]);
t_bool	check_moves(int x, int y, char arr[8][8]);

int	main(void)
{
	char	arr[8][8];
	int 	check;
	int		i;
	int		j;

	scan_arr(arr);
	check = 0;
	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			if (arr[i][j] == 'C')
			{
				check = check_moves(i, j, arr);
				if (check == 1)
				{
					printf("yes\n");
					return (0);
				}
			}
			j++;
		}
		i++;
	}
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
		 /*dans le cas ou le cavalier bouffe un pion adverse*/
		if (arr[x + x_move[i]][y + y_move[j]] >= 'a'
				&& arr[x + x_move[i]][y + y_move[j]] <= 'z')
		{
			return (TRUE);
		}

		 /*dans le cas ou le cavalier sort de l'echiquier*/
		/*if (arr[x + x_move[i]][y + y_move[j]] < 0*/
				/*|| arr[x + x_move[i]][y + y_move[j]] > 8)*/
		/*{*/
			/*i++;*/
			/*j++;*/
		/*}*/

		j++;
		i++;
	}
	return (FALSE);
}
