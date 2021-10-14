#include <stdio.h>

/* 1 3 7 5 o
 * 1 = ligne de depart
 * 3 = point de depart du char a imprimer
 * 7 = nombre de lignes a imprimer
 * 5 = point d'arrivee du char a imprimer
 */

int		main(void)
{
	int		num_rows;
	int		num_columns;
	int		tot_rectangles;

	int		line;
	int		start;
	int		tot_lines;
	int		end;

	char	grid[num_rows][num_columns];
	char	arr[num_rows];

	char	default_letter;
	char	new_letter;

	int		i;
	int		j;

	scanf("%d %d\n", &num_rows, &num_columns);
	scanf("%d\n", &tot_rectangles);

	default_letter = '.';
	i = 0;
	while (i < tot_rectangles)
	{
		scanf("%d %d %d %d %c\n", &line, &start, &tot_lines, &end, &new_letter);

		i++;
	}







	i = 0;
	while (i < num_rows)
	{
		j = 0;
		while (j < num_columns)
		{

			j++;
		}
		i++;
	}
	return (0);
}

