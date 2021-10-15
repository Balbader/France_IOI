#include <stdio.h>

int	counter_x(int nbr, int grid[20][20]);
int	counter_y(int nbr, int grid[20][20]);
int	diag_x(int nbr, int grid[20][20]);
int diag_y(int nbr, int grid[20][20]);
void check_res(int *grid);

int	main(void)
{
	int		grid[20][20];
	int		res[100];
	int		nbr;
	int		i;
	int		j;

	scanf("%d\n", &nbr);
	i = 0;
	while (i < nbr)
	{
		j = 0;
		while (j < nbr)
		{
			scanf("%d\n", &grid[i][j]);
			j++;
		}
		i++;
	}

	check_res(res);
	return (0);
}

int	counter_x(int nbr, int grid[20][20])
{
	int		count;
	int		temp;
	int		i;
	int		j;

	temp = 0;
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

	temp = 0;
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

void check_res(int *grid)
{
	int count;
	int		i;

	count = 0;
	i = 0;
	while (i < (sizeof(*grid) / sizeof(grid[0])))
	{
		if (grid[i] == grid[i+1])
		{
			count++;
		}
		i++;
	}

	if (count == (sizeof(*grid) / sizeof(grid[0])))
		printf("yes\n");
	else
		printf("no\n");

}
