#include <stdio.h>
#include <string.h>

void	print_rec(int, int, int, int, char);

int		main(void)
{
	int		x;			//nbr of lines
	int		y;			//nbr of col
	int		tot_rec;
	int		line;		// top
	int		start;		// left
	int		tot_lines;	// bottom
	int		end;		// right
	char	color;
	char	pixel = '.';
	int		i;
	int		j;
	int		k;

	scanf("%d %d", &x, &y);
	/*scanf("%d\n", &tot_rec);*/


	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			printf("%c", pixel);
			j++;
		}
		printf("\n");
		i++;
	}

	i = 0;
	while (i < tot_rec)
	{
		scanf("%d %d %d %d %c\n", &line, &start, &tot_lines, &end, &color);
		j = 0;
		while (j < x)
		{
			k = 0;
			while (k < y)
			{
				printf("%c", pixel);
				k++;
			}
			printf("\n");
			j++;
		}
		i++;
	}

	return (0);
}


void	print_rec(int line, int start, int tot_lines, int end, char color)
{
	
}

/* 1 3 7 5 o
 * 1 = ligne de depart
 * 3 = point de depart du char a imprimer
 * 7 = nombre de lignes a imprimer
 * 5 = point d'arrivee du char a imprimer
 */
