#include <stdio.h>

char	scan_arr(char arr[8][8]);

int		main(void)
{
	char	arr[8][8];
	int		i;
	int		j;

	scan_arr(arr);
	return (0);
}

char	scan_arr(char arr[8][8])
{
	int		i;
	int		j;
	
	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			scanf("%c", &arr[i][j]);
			j++;
		}
		scanf("\n");
		i++;
	}
	return (**arr);
}

