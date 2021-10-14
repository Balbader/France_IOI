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

	i = 0;
	while (i < nbr)
	{
		j = 0;
		while (j < nbr)
		{
			printf("[%d][%d]: %d ", i, j, grid[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}

	count = 0;
	i = 0;
	while (i < nbr)
	{
		j = 0;
		while (j < nbr)
		{
			count += grid[i][j];
			j++;
		}
		printf("ligne: %d - count: %d\n",i, count);
		count = 0;
		i++;
	}

	count = 0;
	j = 0;
	while (j < nbr)
	{
		i = 0;
		while (i < nbr)
		{
			count += grid[i][j];
			i++;
		}
		printf("col: %d - count: %d\n",j , count);
		count = 0;
		j++;
	}
	return (0);
}
