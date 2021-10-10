#include <stdio.h>

int		main(void)
{
	int		x; //nbr of lines
	int		y; //nbr of col
	int		tot_rec;
	int		x1; // top
	int		y1; // left
	int		x2; // bottom
	int		y2; // right
	int		i;
	char	color;
	char	pixel = '.';

	scanf("%d %d\n", &x, &y);
	scanf("%d\n", &tot_rec);

	i = 0;
	while (i < tot_rec)
	{
		scanf("%d %d %d %d %c\n", &x1, &y1, &x2, &y2, &color);
	}
	return (0);
}
