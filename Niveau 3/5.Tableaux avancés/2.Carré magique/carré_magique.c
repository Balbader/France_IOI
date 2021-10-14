#include <stdio.h>

int	main(void)
{
	int		grid[20][20];
	int		nbr;
	int		grid_nbr;
	int		count;
	int		temp_x;
	int		temp_y;
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

	// calculate total for each row
	count = 0;
	i = 0;
	while (i < nbr)
	{
		j = 0;
		while (j < nbr)
		{
			count += grid[i][j];
			temp_x = count;
			j++;
		}
		count = 0;
		i++;
	}


	// calculate total for each column
	count = 0;
	j = 0;
	while (j < nbr)
	{
		i = 0;
		while (i < nbr)
		{
			count += grid[i][j];
			temp_y = count;
			i++;
		}
		count = 0;
		j++;
	}

	// calculate total for diagonal from left to right up bottom
	diag_x = 0;
	i = 0;
	while (i < nbr)
	{
		j = 0;
		while (j < nbr)
		{
			if (i == j)
				diag_x += grid[i][j];
			j++;
		}
		i++;
	}

	// calculate total for diagonal from right to left bottom up
	diag_y = 0;
	j = nbr;
	while (j >= 0)
	{
		i = nbr;
		while (i >= 0)
		{
			if (i == j)
			{
				diag_y += grid[j][i];
			}
			i--;
		}
		j--;
	}

	// write condition to check if temp_x, temp_y, diag_x, diag_y are equal.
	return (0);
}
