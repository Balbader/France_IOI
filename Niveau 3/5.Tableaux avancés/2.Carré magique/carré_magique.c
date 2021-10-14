#include <stdio.h>

int	main(void)
{
	int		grid[20][20];
	int		res[402];
	int		nbr;
	int		grid_nbr;
	int		count;
	int		diag_x;
	int		diag_y;
	int		i;
	int		j;
	int		k;

	scanf("%d\n", &nbr);

	i = 0;
	while (i < nbr)
	{
		j = 0;
		while (j < nbr)
		{
			scanf("%d\n", &grid_nbr);
			grid[i][j] = grid_nbr;
			j++;
		}
		i++;
	}

	// calculate total for each row
	count = 0;
	i = 0;
	while (i < nbr)
	{
		j = 0;
		while (j < nbr)
		{
			count += grid[i][j];
			res[i] = count;
			j++;
		}
		printf("ligne: %d - count: %d\n",i, count);
		count = 0;
		i++;
	}

	i = 0;
	while (i < (nbr * 2 + 2))
	{
		printf("%d : %d\n", i, res[i]);
		i++;
	}

	// calculate total for each column
	k = nbr;
	count = 0;
	j = 0;
	while (j < nbr)
	{
		i = 0;
		while (i < nbr)
		{
			count += grid[i][j];
			res[k] = count;
			i++;
		}
		printf("col: %d - count: %d\n",j , count);
		count = 0;
		k++;
		j++;
	}

	i = 0;
	while (i < (nbr * 2 + 2))
	{
		printf("%d : %d\n", i, res[i]);
		i++;
	}

	// calculate total for each diagonal
	

	i = 0;
	while (i < (nbr * 2 + 2))
	{
		printf("%d : %d\n", i, res[i]);
		i++;
	}
	return (0);
}
