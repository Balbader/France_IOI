#include <stdio.h>

typedef int		t_bool;
#define TRUE	1
#define FALSE	0

t_bool	check_grid(int nbr, int grid[20][20]);
int     counter_x(int nbr, int grid[20][20]);
int     counter_y(int nbr, int grid[20][20]);
int		diag_x(int nbr, int grid[20][20]);
int		diag_y(int nbr, int grid[20][20]);
void	check_res(int nbr, int *grid);

int   main(void)
{
	int      grid[20][20];
	int      res[1001];
	int      nbr;
	int      i;
	int      j;

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

	if (check_grid(nbr, grid) == FALSE)
	{
		printf("no\n");
		return (0);
	}
	else
	{
		i = 0;
		while (i <= (nbr * 2) + 2)
		{
			if (i <= nbr)
				res[i] = counter_x(nbr, grid);
			else if (i > nbr && i <= (nbr * 2))
				res[i] = counter_y(nbr, grid);
			else if (i > (nbr * 2) && i < (nbr * 2) + 2)
				res[i] = diag_x(nbr, grid);
			else
				res[i] = diag_y(nbr, grid);
			i++;
		}
		check_res(nbr, res);
	}
	return (0);
}

t_bool	check_grid(int	nbr, int grid[20][20])
{
	int		temp[nbr * nbr];
	int		count;
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			temp[k] = grid[i][j];
			k++;
			j++;
		}
		i++;
	}
	count = sizeof(temp) / sizeof(temp[0]);
	i = 0;
	while (i < count)
	{
		j = i + 1;
		while (j < count)
		{
			if (temp[i] == temp[j])
			{
				return FALSE;
			}
			j++;
		}
		i++;
	}
	return (TRUE);
}

void  check_res(int nbr, int *grid)
{
	int      temp;
	int      count;
	int      nb;
	int      i;

	nb = (nbr * 2) + 2;
	count = 0;
	temp = grid[0];
	i = 0;
	while (i < nb)
	{
		if (grid[i] == temp)
			count++;
		i++;
	}
	if (count == nb)
		printf("yes\n");
	else
		printf("no\n");

}

int   counter_x(int nbr, int grid[20][20])
{
	int      count;
	int      temp;
	int      i;
	int      j;

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

int   counter_y(int nbr, int grid[20][20])
{
	int      count;
	int      temp;
	int      i;
	int      j;

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

int   diag_x(int nbr, int grid[20][20])
{
	int      count;
	int      i;
	int      j;

	count = 0;
	i = 0;
	while (i < nbr)
	{
		j = 0;
		while (j < nbr)
		{
			if (i == j)
				count += grid[i][j];
			j++;
		}
		i++;
	}
	return (count);
}

int   diag_y(int nbr, int grid[20][20])
{
	int      count;
	int      i;
	int      j;

	count = 0;
	j = nbr;
	while (j >= 0)
	{
		i = nbr;
		while (i >= 0)
		{
			if (i == j)
				count += grid[i][j];
			i--;
		}
		j--;
	}
	return (count);
}
