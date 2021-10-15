#include <stdio.h>

int	counter_x(int nbr, int grid[20][20]);
int	counter_y(int nbr, int grid[20][20]);
int	diag_x(int nbr, int grid[20][20]);
int diag_y(int nbr, int grid[20][20]);

int	main(void)
{
	int		grid[20][20];
	int		nbr;
	int		grid_nbr;
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
	printf("counter_x: %d\n", counter_x(nbr, grid));
	printf("counter_y: %d\n", counter_y(nbr, grid));
	printf("diag_x: %d\n", diag_x(nbr, grid));
	printf("diag_y: %d\n", diag_y(nbr, grid));
	return (0);
}

int	counter_x(int nbr, int grid[20][20])
{
	int		count;
	int		temp;
	int		i;
	int		j;

	i = 0;
	while (i < nbr)
	{
		j = 0;
		while (j < nbr)
		{
			count += grid[i][j];
			temp = count;
			j++;
		}
		count = 0;
		i++;
	}
	return (temp);
}

int	counter_y(int nbr, int grid[20][20])
{
	int		count;
	int		temp;
	int		i;
	int		j;

	j = 0;
	while (j < nbr)
	{
		i = 0;
		while (i < nbr)
		{
			count += grid[i][j];
			temp = count;
			i++;
		}
		count = 0;
		j++;
	}
	return (temp);
}

int	diag_x(int nbr, int grid[20][20])
{
	int		count;
	int		i;
	int		j;

	count = 0;
	i = 0;
	while (i < nbr)
	{
		j = 0;
		while (j < nbr)
		{
			if (i == j)
			{
				count += grid[i][j];
			}
			j++;
		}
		i++;
	}
	return (count);
}


int	diag_y(int nbr, int grid[20][20])
{
	int		count;
	int		i;
	int		j;

	count = 0;
	j = nbr;
	while (j >= 0)
	{
		i = nbr;
		while (i >= 0)
		{
			if (i == j)
			{
				count += grid[i][j];
			}
			i--;
		}
		j--;
	}
	return (count);
}
