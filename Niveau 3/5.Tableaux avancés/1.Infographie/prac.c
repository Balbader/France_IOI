#include <stdio.h>
#include <string.h>

#define X 100
#define Y 100

int		default_grid(int x, int y, int grid[x][y]);
void	print_grid(int x, int y, int grid[x][y]);

int		main(void)
{
	int		num_rows;
	int		num_columns;
	int		tot_rectangles;
	int 	grid[X][Y];

	int		line;
	int		start;
	int		tot_lines;
	int		end;
	char	new_letter;

	int		i;
	int		j;
	int		k;

	scanf("%d %d\n", &num_rows, &num_columns);
	scanf("%d\n", &tot_rectangles);
	default_grid(num_rows, num_columns, grid);
	k = 0;
	while (k < tot_rectangles)
	{
		scanf("%d %d %d %d %c\n",
				&line, &start, &tot_lines, &end, &new_letter);
		i = 0;
		while (i < num_rows)
		{
			j = 0;
			while (j < num_columns)
			{
				if ((j >= start && j <= end)
						&& (i >= line && i <= tot_lines))
					grid[i][j] = new_letter;
				j++;
			}
			i++;
		}
		k++;
	}
	print_grid(num_rows, num_columns, grid);
	return (0);
}

int		default_grid(int x, int y, int grid[x][y])
{
	int		i;
	int		j;

	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			grid[i][j] = '.';
			j++;
		}
		i++;
	}
	return (**grid);
}

void	print_grid(int x, int y, int grid[x][y])
{
	int		i;
	int		j;

	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			printf("%c", grid[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

