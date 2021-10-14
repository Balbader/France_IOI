#include <stdio.h>
#include <string.h>

int		main(void)
{
	int		num_rows;
	int		num_columns;
	int		tot_rectangles;

	int		line;
	int		start;
	int		tot_lines;
	int		end;

	char	default_letter = '.';
	char	new_letter;

	int		i;
	int		j;
	int		k;

	scanf("%d %d\n", &num_rows, &num_columns);
	scanf("%d\n", &tot_rectangles);

	int 	grid[num_rows][num_columns];
	

	i = 0;
	while (i < num_rows)
	{
		j = 0;
		while (j < num_columns)
		{
			grid[i][j] = default_letter;
			j++;
		}
		i++;
	}

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

	i = 0;
	while (i < num_rows)
	{
		j = 0;
		while (j < num_columns)
		{
			printf("%c", grid[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
